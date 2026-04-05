#pragma once

// Struct nedir?
// Struct deyisenler ve member functionlari 
// 1 ad altinda saxlayan user defined data type dir

// field - structun icinde olan deyisenlere deyilir
// data member - structun icinde olan deyisenlere deyilir
// property - structun icinde olan deyisenlere deyilir
// member function - structun icinde olan funksiyalara deyilir
// method - structun icinde olan funksiyalara deyilir

enum ProductType
{
	FOOD,
	ELECTRONICS,
	CLOTHING
};

enum ProductCountry
{
	AZERBAIJAN,
	TURKEY,
	USA,
	CHINA
};

struct Product
{
	char* name = new char[20] {};
	double price = 0;
	double discount = 0;
	unsigned int stock = 0;
	ProductType type = ProductType::FOOD;
	ProductCountry country = ProductCountry::AZERBAIJAN;

	// Struct yaranan zaman isleyen metoda constructor deyilir
	// 
	// Default constructor - parametrsiz constructor
	Product()
	{
		cout << "Constructor is called" << endl;
		name = new char[20] {};
		price = 0;
		discount = 0;
		stock = 0;
		type = FOOD;
		country = AZERBAIJAN;
	}
	// Parametrized constructor - parametrlidir constructor
	Product(const char* name, double price, double discount, unsigned int stock, ProductType type, ProductCountry country)
	{
		cout << "Parametrized Constructor is called" << endl;
		this->name = new char[strlen(name) + 1] {};
		strcpy(this->name,name);
		this->price = price;
		this->discount = discount;
		this->stock = stock;
		this->type = type;
		this->country = country;
	}

	void print()
	{
		cout << "Name: " << name << endl;
		cout << "Price: " << price << endl;
		cout << "Discount: " << discount << endl;
		cout << "Stock: " << stock << endl;
		cout << "Type: " << type << endl;
		cout << "Country: " << country << endl;
	}

	// Structin omru biten zaman isleyen metoda destructor deyilir
	~Product()
	{
		cout << name << " Destructor is called" << endl;
		delete[] name;
	}
};