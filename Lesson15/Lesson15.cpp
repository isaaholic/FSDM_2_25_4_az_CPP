#include <iostream>
#pragma warning(disable:4996) //strcpy warningini baglayir
using namespace std;

#include "models.h"



int main()
{
	Product p1 = Product("Watermelon", 1, 0.2, 100, FOOD, AZERBAIJAN);
	//p1.print();
	Product* p2 = new Product();
	strcpy(p2->name, "Apple");
	p2->price = 1.5;
	p2->discount = 0.2;
	p2->stock = 100;
	p2->type = FOOD;
	p2->country = AZERBAIJAN;
	//p2->print();
	delete p2;
	Product* products = new Product[3]
	{
		{"Watermelon", 1, 0.2, 100, FOOD, AZERBAIJAN},
		{"Apple", 1.5, 0.2, 100, FOOD, AZERBAIJAN},
		{"Banana", 1.2, 0.1, 100, FOOD, AZERBAIJAN}
	};
	products[2].print();
	return 0;
}