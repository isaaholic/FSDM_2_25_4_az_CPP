#include <iostream>

using namespace std;

// Polymorphism
// virtual function and overriding

class Animal
{
public:
	char* name;


	virtual void MakeSound()
	{
		cout << "Animal Sound!" << endl;
	}

	virtual ~Animal() = default;
};

class Dog : public Animal
{
public:
	virtual void MakeSound() final
	{
		cout << "Woof!" << endl;
	}

	virtual void Run()
	{
		cout << "Dog is running!" << endl;
	}

	~Dog()
	{
		cout << "Dog Destructor" << endl;
		delete name;
	};
};

//class Poppy : public Dog
//{
//public:
//	void MakeSound() // Error: cannot override final function
//	{
//		cout << "Poppy Sound!" << endl;
//	}
//	void Run() override
//	{
//		cout << "Poppy is running!" << endl;
//	}
//};

int main()
{
	// Old way (without polymorphism)
	//Dog* d1 = new Dog();
	//d1->MakeSound(); // Calls Dog's version of MakeSound
	//Animal* a1 = d1; // Upcasting
	//Animal* a2 = new Dog(); // Upcasting
	//a1->MakeSound(); // Calls Animal's version of MakeSound (not polymorphic)
	//a2->MakeSound(); // Calls Animal's version of MakeSound (not polymorphic)
	// 
	//Dog* d1 = new Dog();
	//d1->MakeSound(); // Calls Dog's version of MakeSound
	//Animal* a1 = d1; // Upcasting
	//Animal* a2 = new Dog(); // Upcasting
	//a1->MakeSound(); // Calls Dog's version of MakeSound (polymorphic)
	//a2->MakeSound(); // Calls Dog's version of MakeSound (polymorphic)
	//Poppy* a3 = new Poppy();
	//a3->Run(); // Calls Poppy's version of MakeSound (polymorphic)

	//Animal* a1 = new Dog();
	//a1->name = new char[20] {'M', 'a', 'x', '\0'};
	//delete a1; // Calls Dog's destructor, which deletes the name
	//Animal* a2 = new Dog();
	//a2->name = new char[20] {'B', 'e', 'l', 'l', 'a', '\0'};
	//delete a2; // Calls Dog's destructor, which deletes the name
}


//class : Car
//
//	class : Manual
//	class : Automatic
//
//	Manaul ve Automatic - den de mashinlar yaransin.
//	Misal class Bmw : Automatic
//
//	funksiya yazirisiz, Parametr olaraq Base qebul edir.
//	Funksiya icersinde mashinlarin melumatlarni chap edirsiz.
//
//	Her mashina aid field - ler ve mehodlar olsun.
//
//	Base class adi altinda butun mashinlari vector - da saxlamaq
//	Dersde kecdiylermizden istifade etmek...