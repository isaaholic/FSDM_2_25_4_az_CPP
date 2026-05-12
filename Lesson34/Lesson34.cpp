#include <iostream>
#include <ctime>
#include <chrono>

using namespace std;

struct DateTime
{
public:
	int day;
	int month;
	int year;
	int hour;
	int minute;
	int second;
	DateTime() = default;
	DateTime(int day, int month, int year, int hour, int minute, int second)
	{
		this->day = day;
		this->month = month;
		this->year = year;
		this->hour = hour;
		this->minute = minute;
		this->second = second;
	}
};

class BaseEntity // Abstract class
{
	static int staticId;

public:
	int id;
	DateTime createdAt;
	DateTime updatedAt;

	BaseEntity()
	{
		createdAt = DateTime(1, 1, 2020, 0, 0, 0); // default value for demonstration
		updatedAt = createdAt;
		id = ++staticId;
	}

	virtual void show() = 0; // pure virtual function makes this class abstract
};

int BaseEntity::staticId = 0;

class User : public BaseEntity // if User does not implement show(), it will also be abstract and cannot be instantiated
{
public:
	string name;
	string email;
	User(string name, string email) : BaseEntity()
	{
		this->name = name;
		this->email = email;
	}

	void show() override // Now User is a concrete class and can be instantiated
	{
		cout << "User ID: " << id << endl;
		cout << "Name: " << name << endl;
		cout << "Email: " << email << endl;
	}
};

// Notification SendNotification(string message, string to, string from);

class A
{
public:
	int x;
	int y;
	A()
	{

	}

	virtual ~A() = 0; // Pure virtual destructor must be defined, even if it's pure virtual, to ensure proper cleanup of derived classes
};

A::~A() {}


int main()
{
	//BaseEntity* entity1 = new BaseEntity(); // Error: cannot instantiate abstract class
	User* u = new User("Isa", "email@gmail.com");
}