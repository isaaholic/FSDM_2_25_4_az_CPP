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

//class Human
//{
//public:
//	string FullName;
//	float Height;
//	float Weight;
//	DateTime BirthDate;
//	string Address;
//
//	Human()
//	{
//		cout << "Human Constructor" << endl;
//	}
//
//	Human(string FullName, float Height, float Weight, DateTime BirthDate, string Address)
//	{
//		cout << "Human Constructor with parameters" << endl;
//		this->FullName = FullName;
//		this->Height = Height;
//		this->Weight = Weight;
//		this->BirthDate = BirthDate;
//		this->Address = Address;
//	}
//
//	~Human()
//	{
//		cout << "Human Destructor" << endl;
//	}
//};
//
//class Student : public Human
//{
//public:
//	Student() = delete;
//	Student(string FullName, float Height, float Weight, DateTime BirthDate, string Address)
//	{
//		cout << "Student Constructor with parameters" << endl;
//		this->FullName = FullName;
//	}
//
//	~Student()
//	{
//		cout << "Student Destructor" << endl;
//	}
//};
//
//// Relationships between classes:
//// 1. Inheritance - is-a relationship
//// 2. Composition: - has a relationship
////		1. Association - uses a relationship
////		2. Aggregation - has a relationship with shared ownership
//
//// Association: Student uses DateTime
//
//// Aggregation:
//class Teacher : public Human
//{
//};
//
//class University
//{
//public:
//	string Name;
//	vector<Teacher> Teachers;
//	University(string Name)
//	{
//		this->Name = Name;
//	}
//};
//
//enum AnimalType
//{
//	Flying,
//	Swimming,
//	Walking,
//	Amphibious
//};
//
//class Animal
//{
//public:
//	string Name;
//	double weight;
//	AnimalType type;
//
//	Animal(string name, double weight, AnimalType animalType)
//	{
//		this->Name = name;
//		this->weight = weight;
//		this->type = animalType;
//	}
//
//	void MakeSound()
//	{
//		cout << "Animal sound" << endl;
//	}
//};
//
//class Dog : public Animal
//{
//public:
//	string Breed;
//	Dog() : Animal("", 0.0, Walking)
//	{
//
//	}
//
//	Dog(string name, double weight, string breed = "") : Animal(name, weight, Walking)
//	{
//		this->Breed = breed;
//	}
//
//	void MakeSound()
//	{
//		cout << "Woof!" << endl;
//	}
//
//	void SayHi()
//	{
//		Animal::MakeSound(); // Call the base class method
//	}
//};

// Multiple inheritance
// give me real world example of multiple inheritance
//class Student
//{
//public:
//	string StudentID;
//	float ScholarshipAmount;
//	float GPA;
//	Student() = default;
//};
//
//class Employee
//{
//public:
//	string EmployeeID;
//	float Salary;
//
//	Employee() = default;
//};
//
//class Tutor : public Student, public Employee
//{
//};

// Diamond
class A
{
public:
	A()
	{
		cout << "A Constructor" << endl;
	}

	void Display()
	{
		cout << "A Display" << endl;
	}
};

class B : virtual public A
{
public:
	B()
	{
		cout << "B Constructor" << endl;
	}
};

class C : virtual public A
{
public:
	C()
	{
		cout << "C Constructor" << endl;
	}

	void Display()
	{
		cout << "C Display" << endl;
	}
};

class D : public B, public C
{
public:
	D()
	{
		cout << "D Constructor" << endl;
	}
};

int main()
{
	D d1;
	d1.Display(); // error: ambiguous call to display
	B b1;
	b1.Display(); // Calls B's version of Display
	//d1.B::Display(); // Calls B's version of Display
	//Student s1 = Student("John Doe", 180.0f, 75.0f, DateTime(1, 1, 2000), "123 Main St");
	//s1.FullName = "Jane Doe";

	//Dog d1("Buddy", 30.0);
	//d1.Animal::MakeSound(); // Calls the base class method
	//d1.MakeSound();
	//Animal a1 = Dog("Alex",42.0,"Golden Retriever");
	//Animal a2("Charlie", 25.0, Walking);
	//a1.MakeSound(); // Calls the base class method due to slicing
	//a2.MakeSound();

	//Animal* a3 = &d1;
	//a3->MakeSound(); // Calls the base class method due to slicing
	//Tutor t1;
	//t1.StudentID = "S12345";
	//t1.EmployeeID = "E54321";
}