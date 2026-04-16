#include <iostream>
#include <cassert>

using namespace std;


// intellisense => ctrl + space

//// OOP principles
// Encapsulation
// Inheritance
// Polymorphism
// Abstraction



//// Access modifiers or Access specifiers
// private - Hecbir sahede gorunurluyu yeni elcatanligi olmur
// protected - instance da gorunmur yanliz ondan toreyen class da gorunur olur
// public - Herbir sahede gorunurluyu yeni elcatanligi olur


class Student {
public:
	// (field, data member)
	char name[30]{};
	char surname[30]{};
	int age = 0;


	// (method, member function)
	void greet() {
		cout << name << " sizi salamlayir...\n";
	};
};




int main()
{
	Student s1;
	strcpy_s(s1.name, "Murad");
	s1.greet();

	return 0;
}





//////////////////////////////////
// Initialize
// Define
// Assign







//////////////////////////////////
//// Keywords
// delete
// default






//////////////////////////////////
//// Constructors

// Default Constructor
// Parameterized Constructor
// Copy Constructor
// Move Constructor





//////////////////////////////////
//// Destructor



class Product {
public:
	char name[30];
	char color[30];
	double price;

	Product() {
		cout << "Default\n";
		strcpy_s(name, "Empty");
		strcpy_s(color, "Empty");
		price = 0;
	}

	Product(const char* name, const char* color, double price) {
		cout << "Param\n";
		strcpy_s(this->name, name);
		strcpy_s(this->color, color);
		this->price = price;
	}

	void print() {
		cout << "Name: " << name << endl;
		cout << "Color: " << color << endl;
		cout << "Price: " << price << endl;
	}



	~Product() {
		cout << "Destructor\n";
	}
};




int main2() {
	Product p1;
	p1.print();


	Product p2("Fanta", "Orange", 1.5);
	p2.print();

	return 0;
}






//////////////////////////////////
//// TASK

#define PI 3.14


// class: Circle
// field: radius
// constructors: default, parameterized
// methods: getArea(), getLength()
// PI*r^2 => sahenin tapilmasi
// 2*PI*r => uzunlugunu tapmaq








//////////////////////////////////
// Method body outside a class
// :: Scope resolution



class Circle {
public:
	double radius;

	Circle()
	{
		this->radius = 0;
	}

	Circle(double radius)
	{
		this->radius = radius;
	}


	double getArea()
	{
		return PI * radius * radius;
	}
	double getLength()
	{
		return 2 * PI * radius;
	}
};



//double Circle::getArea() {
//	return PI * pow(radius, 2);
//}
//
//double  Circle::getLength() {
//	return 2 * PI * radius;
//}
//
//Circle::Circle(double radius) {
//	this->radius = radius;
//};

//
//
//int main() {
//	Circle c(10);
//
//	cout << c.getArea() << endl;
//	cout << c.getLength() << endl;
//
//	return 0;
//}







//////////////////////////////////
//// Encapsulation
//// Accessor (getter and setter)


class Rectangle {
private:
	char _color[20];
	double _length;
	double _width;

public:

	Rectangle()
	{
		strcpy_s(_color, "no color");
		_length = 0;
		_width = 0;
	}

	Rectangle(const char* color, double length, double width)
	{
		setColor(color);
		setLength(length);
		setWidth(width);
	}


	const char* getColor() { return _color; }
	double getLength() { return _length; }
	double getWidth() { return _width; }


	void setColor(const char* color) {
		size_t len = strlen(color);

		if (len > 2 && len < 20) {
			strcpy_s(_color, color);
			return;
		}

		assert(!"Error: Enter color size between 2 and 20");
	}
	void setLength(double length) {
		if (length > 0 && length < 100) {
			_length = length;
			return;
		}

		assert(!"Error: Enter length between 0 and 100");
	}
	void setWidth(double width) {
		if (width > 0 && width < 100) {
			_width = width;
			return;
		}

		assert(!"Error: Enter width between 0 and 100");
	}


	void print() {
		cout << "Color: " << _color << endl;
		cout << "Length: " << _length << endl;
		cout << "Width: " << _width << endl;
	}
};


//int main() {
//
//	//Rectangle r1;
//	//r1.setColor("s");
//	//r1.print();
//
//
//	Rectangle r2("Red", 5.5, 10.2);
//	r2.print();
//
//	// r2.setWidth(-42.6);
//
//
//	cout << r2.getColor() << endl;
//	cout << r2.getLength() << endl;
//	cout << r2.getWidth() << endl;
//
//
//
//
//
//
//	return 0;
//}