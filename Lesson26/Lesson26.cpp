// Lesson26.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cassert>
#include <string>
#include <sstream>

using namespace std;

//#include "FriendDemo.h"
#include "Student.h"

class Fraction
{
private:
	int _numerator;
	int _denominator;

	int GCD(int a, int b)
	{
		if (b == 0)
			return a;

		return GCD(b, a % b);
	}
public:
	void setNumber(int numerator)
	{
		this->_numerator = numerator;
	}

	void setDenominator(int denominator)
	{
		if (denominator == 0)
			assert(!"denominator!=0");
		this->_denominator = denominator;
	}

	int getNumerator() const
	{
		return this->_numerator;
	}

	int getDenominator() const
	{
		return this->_denominator;
	}

	void Simplify()
	{
		int gcd = GCD(_numerator, _denominator);
		_numerator /= gcd;
		_denominator /= gcd;
	}

	Fraction()
	{
		setNumber(0);
		setDenominator(1);
	}

	Fraction(int numerator, int denominator)
	{
		setNumber(numerator);
		setDenominator(denominator);
	}

	Fraction operator+(const Fraction& other)
	{
		int newNumerator = this->_numerator * other._denominator + other._numerator * this->_denominator;
		int newDenominator = this->_denominator * other._denominator;
		return Fraction(newNumerator, newDenominator);
	}

	Fraction operator-(const Fraction& other)
	{
		return *this + Fraction(other._numerator,-other._denominator);
	}

	Fraction operator*(const Fraction& other)
	{
		int newNumerator = this->_numerator * other._numerator;
		int newDenominator = this->_denominator * other._denominator;
		return Fraction(newNumerator, newDenominator);
	}

	Fraction operator/(const Fraction& other)
	{
		Fraction fr1 = Fraction(other._denominator, other._numerator);
		return fr1 * (*this);
	}

	bool operator>(const Fraction& other)
	{
		return this->_numerator * other._denominator > other._numerator * this->_denominator;
	}

	bool operator<(const Fraction& other)
	{
		return *this != other && !(*this > other);
	}

	bool operator==(const Fraction& other)
	{
		Fraction copy = other;
		copy.Simplify();
		Fraction copy2 = *this;
		copy2.Simplify();
		return copy._numerator == copy2._numerator && copy._denominator == copy2._denominator;
	}

	bool operator!=(const Fraction& other)
	{
		return !(*this == other);
	}

	Fraction operator++()
	{
		this->_numerator += this->_denominator;
		return *this;
	}

	Fraction operator++(int)
	{
		Fraction copy = *this;
		this->_numerator += this->_denominator;
		return copy;
	}

	Fraction operator--()
	{
		this->_numerator -= this->_denominator;
		return *this;
	}

	Fraction operator--(int)
	{
		Fraction copy = *this;
		this->_numerator -= this->_denominator;
		return copy;
	}

	explicit operator int()
	{
		return this->_numerator / this->_denominator;
	}

	explicit operator double()
	{
		return (double)this->_numerator / this->_denominator;
	}

	explicit operator string()
	{
		return to_string(this->_numerator) + "/" + to_string(this->_denominator);
	}

	friend ostream& operator<<(ostream& os, const Fraction& fr)
	{
		os << fr._numerator << "/" << fr._denominator;
		return os;
	}

	friend istream& operator>>(istream& is, Fraction& fr)
	{
		is >> fr._numerator >> fr._denominator;
		return is;
	}
};

int main()
{
	stringstream ss;
	Student s("isa", "gokhan", 20, 85.5);
	Student s2 = s;
	cout << s2.getName() << endl;
	ss << "John\nDoe\n20\n85.5\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
