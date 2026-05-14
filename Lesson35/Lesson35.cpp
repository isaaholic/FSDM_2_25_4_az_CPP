#include <iostream>
#include <vector>
#include <string>

using namespace std;

//// Upcasting vs Downcasting
//
//class Animal
//{
//public:
//	virtual void MakeSound()
//	{
//		cout << "Animal sound" << endl;
//	}
//};
//
//class Dog : public Animal
//{
//public:
//	string Breed;
//	void MakeSound() override
//	{
//		cout << "Woof!" << endl;
//	}
//};
typedef unsigned int uint;

struct Date
{
	uint day;
	uint month;
	uint year;
	Date() = default;
	Date(uint day, uint month, uint year)
	{
		this->day = day;
		this->month = month;
		this->year = year;
	}

	string toString() const
	{
		return to_string(day) + "/" + to_string(month) + "/" + to_string(year);
	}
};


class BaseEntity
{
	static uint staticId;
public:
	uint id;
	Date createdAt;
	Date updatedAt;

	BaseEntity()
	{
		id = ++staticId;
		createdAt = Date(1, 1, 2020); // default value for demonstration
		updatedAt = createdAt;
	}
};

uint BaseEntity::staticId = 0;

class Basket : public BaseEntity
{
public:
	vector<uint> productIds; // Store product IDs in the basket
	Basket() = default;

	void AddProduct(uint productId)
	{
		productIds.push_back(productId);
	}
};

class User : public BaseEntity
{
public:
	string name;
	string email;
	uint basketId; // Association: User has a Basket

	User() : BaseEntity()
	{
		name = "";
		email = "";
		basketId = 0; // No basket assigned by default
	}
	User(string name, string email) : BaseEntity()
	{
		this->name = name;
		this->email = email;
		basketId = 0; // No basket assigned by default
	}
};

class Product : public BaseEntity
{
public:
	string name;
	float price;
	Product() = default;
	Product(string name, float price) : BaseEntity()
	{
		this->name = name;
		this->price = price;
	}
};

vector<User> users; // Global user list for demonstration
vector<Product> products; // Global product list for demonstration
vector<Basket> baskets; // Global basket list for demonstration

template<typename TEntity>
class Repository
{
public:
	virtual void Add(TEntity entity) = 0;
	virtual void Remove(uint id) = 0;
	virtual TEntity GetById(uint id) = 0;
	virtual vector<TEntity> GetAll() = 0;
	virtual void Update(TEntity entity) = 0;
	virtual void AddRange(vector<TEntity> entities) = 0;
};

class UserRepository : public Repository<User>
{
public:
	void Add(User user) override
	{
		if (find_if(users.begin(), users.end(), [user](User& u) { return u.id == user.id; }) != users.end())
			throw runtime_error("User with this ID already exists");
		users.push_back(user);
	}

	void AddRange(vector<User> newUsers)
	{
		for (auto user : newUsers)
		{
			Add(user); // Reuse the Add method to ensure validation
		}
	}

	void Remove(uint id) override
	{
		users.erase(remove_if(users.begin(), users.end(), [id](User& u) { return u.id == id; }), users.end());
	}

	User GetById(uint id) override
	{
		auto it = find_if(users.begin(), users.end(), [id](User& u) { return u.id == id; });
		if (it != users.end())
			return *it;
		throw runtime_error("User not found");
	}

	vector<User> GetAll() override
	{
		return users;
	}

	void Update(User user) override
	{
		auto it = find_if(users.begin(), users.end(), [user](User& u) { return u.id == user.id; });
		if (it != users.end())
		{
			*it = user;
			return;
		}
		throw runtime_error("User not found");
	}
};

Repository<User>* userRepository = new UserRepository();

int main()
{
	User user1 = User("Medine", "quliyeva@email.com");
	User user2 = User("Isa", "memmedli@email.com");
	User user3 = User("Ali", "isgenderov@gmail.com");
	userRepository->AddRange({ user1,user2,user3 });
	user1.email = "quliyeva@gmail.com";
	userRepository->Update(user1);
	//userRepository->Remove(user1->id);

	auto users = userRepository->GetAll();

	for (auto user : users)
	{
		cout << "User: " << user.email << endl;
	}

	//auto dbUser = userRepository->GetById(user1.id);
	//cout << "User: " << dbUser.email << endl;





	//Animal* a1 = new Dog(); // Upcasting: Dog is treated as an Animal
	//a1->MakeSound(); // Calls Dog's version of MakeSound due to virtual function
	//Dog* d1 = (Dog*)a1; // Downcasting: Animal is treated as a Dog (unsafe)
	//cout << d1->Breed << endl; // Accessing Dog-specific member (undefined behavior if Breed is not set)
	//Animal* a2 = new Animal(); // Creating a base class object
	//Dog* d2 = (Dog*)a2; // Downcasting: Animal is treated as a Dog (unsafe, will compile but may cause runtime errors)
	//d2->MakeSound(); // Undefined behavior: calling Dog's MakeSound on an Animal object
}