#include <iostream>
#include <cassert>

using namespace std;

class Food
{
	double calories;
	char* name;
	bool isHealthy;
public:
	// Default constructor
    Food()
    {
		calories = 0;
		isHealthy = false;
		cout << "Food Default constructor called" << endl;
    }

	// Parameterized constructor with constructor delegation
	Food(string name) : Food() // Constructor delegation
	{
		setName(name.c_str());
		cout << "Food constructor with name parameter called" << endl;
	}

	// Copy constructor
	Food(const Food& other)
	{
		setName(other.name);
		calories = other.calories;
		isHealthy = other.isHealthy;
		cout << "Food Copy constructor called" << endl;
	}

	// Destructor
	~Food()
	{
		cout << "Food Destructor called for " << (name ? name : "null") << endl;
		delete[] name;
		name = nullptr;
	}

	Food& operator=(const Food& other) // Overriding - halhazirda var olan operatorun yeniden yazilmasi
	{
		if (this != &other) // Self-assignment check
		{
			setName(other.name);
			calories = other.calories;
			isHealthy = other.isHealthy;
			cout << "Food Copy assignment operator called" << endl;
		}
		return *this;
	}

	void setName(const char* name)
	{
		if (name == nullptr)
			assert(!"name == nullptr");
		
		if (this->name != nullptr)
			delete[] this->name;
		
		size_t len = strlen(name) + 1;
		this->name = new char[len];
		strcpy_s(this->name, len, name);
	}

	void print()
	{
		cout << "Name: " << name << endl;
	}
};

int main()
{
	/*Food f1 = Food("Pizza");
	Food** foods = new Food * [10]
		{
			new Food("Burger"),
			new Food("Burger"),
			new Food("Burger"),
			new Food("Burger"),
			new Food("Burger"),
			new Food("Burger"),
			new Food("Burger"),
		};*/
	Food f1 = Food("Pizza");
	Food f2 = f1;
	f1.setName("Chicken");
	f1.print();
	f2.print();
}