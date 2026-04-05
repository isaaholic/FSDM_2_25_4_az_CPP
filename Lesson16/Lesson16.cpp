#include <iostream>

using namespace std;

//class Base
//{
//public:
//	virtual void func() // Added 'virtual' to make the class polymorphic
//	{
//		cout << "Base class function" << endl;
//	}
//};
//
//class Derived : public Base
//{
//public:
//	void func() override
//	{
//		cout << "Derived class function" << endl;
//	}
//};

#include "models.h"
#include "datas.h"
#include "functions.h"

// Fraction adinda struct yaradirsiniz
// Bu structin icinde numerator ve denominator adinda iki int tipinde field olacaq
// 2 eded metod olacaq
// Addition(fr2) -> bu iki fractioni toplayib yeni fraction qaytaracaq
// Multiplaction(fr2) - > bu iki fractioni vurub yeni fraction qaytaracaq
// print -> Fraction(2,3) -> 2/3 kimi ekrana cap edilecek

struct Fraction
{
	int numerator;
	int denominator;

	Fraction()
	{
		numerator = 0;
		denominator = 1;
	}

	Fraction(int num, int denom)
	{
		if (denom == 0)
		{
			cout << "Denominator cannot be zero. Setting to 1." << endl;
			denominator = 1;
		}
		numerator = num;
		denominator = denom;
	}

	Fraction Addition(Fraction fr)
	{
		Fraction result;
		result.numerator = this->numerator * fr.denominator + fr.numerator * this->denominator;
		result.denominator = this->denominator * fr.denominator;
		return result;
	}

	Fraction Multiplaction(Fraction fr)
	{
		Fraction result;
		result.numerator = this->numerator * fr.numerator;
		result.denominator = this->denominator * fr.denominator;

		return result;
	}

	Fraction Substraction(Fraction fr)
	{
		Fraction result;
		result.numerator = this->numerator * fr.denominator - fr.numerator * this->denominator;
		result.denominator = this->denominator * fr.denominator;

		return result;
	}

	void Print()
	{
		cout << this->numerator << '/' << this->denominator << endl;
	}
	// Substraction
};

int main()
{
	Fraction fr1(1, 2);
	Fraction fr2(3, 4);
	Fraction fr3 = fr2.Addition(fr1);
	fr3.Print(); // Output: 10/8
	fr3 = fr2.Substraction(fr1);
	fr3.Print(); // Output: 2/8
	fr3 = fr2.Multiplaction(fr1); // Output: 
	fr3.Print(); // Output: 3/8
	srand(time(0));
	//// Type casting - Type conversion - Tip cevrilmesi
	//// Implicit type casting - Implicit type conversion - Qeyri-askar tip cevrilmesi
	//int a = 5;
	//double b = a;
	//// Explicit type casting - Explicit type conversion - Askar tip cevrilmesi
	//// C style type casting
	//double c = 3.14;
	//int d = (int)c;
	//// static_cast
	//double x = 3.14;
	//int y = static_cast<int>(x);
	//// dynamic_cast - Polymorphic tipler ucun istifade olunur
	//double z = 3.14;
	////int w = dynamic_cast<int>(z); // Error: dynamic_cast can only be used with polymorphic types
	//Base* base = new Derived();
	//base->func(); // Base class function
	//Derived* derived = dynamic_cast<Derived*>(base);
	//if (derived) // Check if dynamic_cast was successful
	//{
	//    derived->func(); // Derived class function
	//}
	// const_cast - Const tipler ucun istifade olunur
	//const int e = 10;
	//int* f = const_cast<int*>(&e);
	//*f = 20; // Modifying a const variable through a pointer is undefined behavior
	//cout << *f << endl; // Output may be 20, but this is undefined behavior
	//cout << e << endl;
	// reinterpret_cast - Pointer tipler ucun istifade olunur
	//int g = 5;
	//float b = reinterpret_cast<float&>(g); // Reinterpreting the bits of 'g' as a float
	//int* h = reinterpret_cast<int*>(&g);
	//*h = 10; // Modifying the value through the pointer
	//cout << g << endl; // Output will be 10
	//cout << b << endl; // Output may be a very large or small float value, depending on the bit representation of 10
	//float pi = 3.14;
	//int* ptr = reinterpret_cast<int*>(&pi); // Reinterpreting the bits of 'pi' as an int
	//cout << *ptr << endl; // Output may be a large integer value, depending on the bit representation of 3.14
	cout << workers[0].name << " " << workers[0].surname << endl;
	cout << workers[6].name << " " << workers[6].surname << endl;
	size_t workersSize = 5;
	Worker* workers = createWorkers(workersSize,20);
	Company* company = createCompany(workers, workersSize);
	company->printInfo();
}