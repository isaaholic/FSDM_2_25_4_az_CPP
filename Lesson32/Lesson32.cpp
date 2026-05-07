#include <iostream>
#include <vector>

using namespace std;

typedef unsigned short int ushort;

struct DateTime
{
	ushort day;
	ushort month;
	ushort year;

	DateTime()
	{
		cout << "DateTime Constructor" << endl;
		day = 0;
		month = 0;
		year = 0;
	}

	DateTime(ushort day, ushort month, ushort year)
	{
		cout << "DateTime Constructor with parameters" << endl;
		this->day = day;
		this->month = month;
		this->year = year;
	}

	~DateTime()
	{
		cout << "DateTime Destructor" << endl;
	}
};

class Human
{
public:
	string FullName;
	float Height;
	float Weight;
	DateTime BirthDate;
	string Address;

	Human()
	{
		cout << "Human Constructor" << endl;
	}

	Human(string FullName, float Height, float Weight, DateTime BirthDate, string Address)
	{
		cout << "Human Constructor with parameters" << endl;
		this->FullName = FullName;
		this->Height = Height;
		this->Weight = Weight;
		this->BirthDate = BirthDate;
		this->Address = Address;
	}

	~Human()
	{
		cout << "Human Destructor" << endl;
	}
};

class Student : public Human
{
public:
	Student() = delete;
	Student(string FullName, float Height, float Weight, DateTime BirthDate, string Address)
	{
		cout << "Student Constructor with parameters" << endl;
		this->FullName = FullName;
	}

	~Student()
	{
		cout << "Student Destructor" << endl;
	}
};

// Relationships between classes:
// 1. Inheritance - is-a relationship
// 2. Composition: - has a relationship
//		1. Association - uses a relationship
//		2. Aggregation - has a relationship with shared ownership

// Association: Student uses DateTime

// Aggregation:
class Teacher : public Human
{
};

class University
{
public:
	string Name;
	vector<Teacher> Teachers;
	University(string Name)
	{
		this->Name = Name;
	}
};

int main()
{
	Student s1 = Student("John Doe", 180.0f, 75.0f, DateTime(1, 1, 2000), "123 Main St");
	//s1.FullName = "Jane Doe";
}