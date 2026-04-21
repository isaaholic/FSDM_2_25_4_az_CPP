#include <iostream>
#include <cassert>

using namespace std;

class Fraction
{
private:
	int _numerator;
	int _denominator;
public:
	Fraction() = delete;
	Fraction(int num, int denom)
	{
		set_numerator(num);
		set_denominator(denom);
	}

	void set_numerator(int num)
	{
		this->_numerator = num;
	}

	void set_denominator(int denom)
	{
		if (denom == 0)
			assert(!"_denominator cannot be zero");
		this->_denominator = denom;
	}

	Fraction Addition(const Fraction& other)
	{
		int num = this->_numerator * other._denominator + other._numerator * this->_denominator;
		int denom = this->_denominator * other._denominator;
		return Fraction(num, denom);
	}

	Fraction operator+(const Fraction& other)
	{
		return this->Addition(other);
	}

	Fraction operator%(const Fraction& other) = delete;

	friend ostream& operator<<(ostream& os, const Fraction& f);

	// Prefix
	Fraction& operator++()
	{
		_numerator += _denominator;
		return *this;
	}
	Fraction& operator--()
	{
		_numerator -= _denominator;
		return *this;
	}


	// Postfix
	Fraction& operator++(int)
	{
		Fraction temp = *this;
		_numerator += _denominator;
		return temp;
	}
	Fraction& operator--(int)
	{
		Fraction temp = *this;
		_numerator -= _denominator;
		return temp;
	}

	int operator[](int index)
	{
		if (index == 0)
			return _numerator;
		else if (index == 1)
			return _denominator;
		else
			assert(!"Index must be 0 or 1");
	}
};

#include "vector.h"
// Operator Overloading



ostream& operator<<(ostream& os, const Fraction& f)
{
	os << f._numerator << "/" << f._denominator;
	return os;
}


typedef unsigned short ushort;

class Time
{
private:
	ushort _hours;
	ushort _minutes;
	ushort _seconds;
public:
	Time()
	{
		setSeconds(0);
		setMinute(0);
		setHours(0);
	}

	Time(ushort seconds, ushort minutes, ushort hours)
	{
		setSeconds(seconds);
		setMinute(minutes);
		setHours(hours);
	}

	void setHours(ushort hours)
	{
		if (hours > 23)
			assert(!"Hours must be between 0 and 23");
		this->_hours = hours;
	}
	void setMinute(ushort minutes)
	{
		if (minutes > 59)
			assert(!"Minutes must be between 0 and 59");
		this->_minutes = minutes;
	}
	void setSeconds(ushort seconds)
	{
		if (seconds > 59)
			assert(!"Seconds must be between 0 and 59");
		this->_seconds = seconds;
	}

	ushort getHours() const { return _hours; }
	ushort getMinutes() const { return _minutes; }
	ushort getSeconds() const { return _seconds; }

	// Operator overloadings

	Time& operator++()
	{
		_seconds == 59 ? _seconds = 0 : _seconds++;
		_seconds == 0 && _minutes == 59 ? _minutes = 0 : _minutes++;
		_minutes == 0 && _hours == 23 ? _hours = 0 : _hours++;
		return *this;
	}

	Time& operator--()
	{
		_seconds == 0 ? _seconds = 59 : _seconds--;
		_seconds == 59 && _minutes == 0 ? _minutes = 59 : _minutes--;
		_minutes == 59 && _hours == 0 ? _hours = 23 : _hours--;
		return *this;
	}

	Time& operator++(int)
	{
		Time temp = *this;
		_seconds == 59 ? _seconds = 0 : _seconds++;
		_seconds == 0 && _minutes == 59 ? _minutes = 0 : _minutes++;
		_minutes == 0 && _hours == 23 ? _hours = 0 : _hours++;
		return temp;
	}

	Time& operator--(int)
	{
		Time temp = *this;
		_seconds == 0 ? _seconds = 59 : _seconds--;
		_seconds == 59 && _minutes == 0 ? _minutes = 59 : _minutes--;
		_minutes == 59 && _hours == 0 ? _hours = 23 : _hours--;
		return temp;
	}

	bool operator<(const Time& other) const
	{
		int totalSecondsThis = _hours * 3600 + _minutes * 60 + _seconds;
		int totalSecondsOther = other._hours * 3600 + other._minutes * 60 + other._seconds;

		return totalSecondsThis < totalSecondsOther;
	}

	bool operator>(const Time& other) const
	{
		return other < *this;
	}

	bool operator<=(const Time& other) const
	{
		return !(other < *this);
	}

	bool operator>=(const Time& other) const
	{
		return !(*this < other);
	}

	bool operator==(const Time& other) const
	{
		return _hours == other._hours && _minutes == other._minutes && _seconds == other._seconds;
	}

	bool operator!=(const Time& other) const
	{
		return !(*this == other);
	}

	void operator()() const
	{
		cout << (_hours < 10 ? "0" : "") << _hours << ":"
			<< (_minutes < 10 ? "0" : "") << _minutes << ":"
			<< (_seconds < 10 ? "0" : "") << _seconds << endl;
	}

	bool operator!()
	{
		return _hours == 0 && _minutes == 0 && _seconds == 0;
	}
};

int main()
{
	//Fraction f1(1, 2);
	//Fraction f2(1, 3);
	//Fraction f3 = f1 + f2;
	////Fraction f4 = f1 % f2; // error
	//cout << f3 << endl;
	//Fraction f4 = f3++;
	//cout << f4 << endl;
	//cout << ++f3 << endl;
	//cout << f3[0] << endl;

	// User-defined dynamic array (vector)

	Vector vector;

	vector.push_back(10);
	vector.push_back(20);
	vector.push_back(30);
	vector.push_back(40);
	vector.push_back(50);


	cout << vector.size() << endl;
	cout << vector.capacity() << endl;

	cout << vector[1] << endl;

	vector.print();

	vector();



	//int sumData = (int)vector;
	//cout << sumData << endl;





	 //bool isEmpty = vector;
	 //cout << isEmpty << endl;


	 //if (vector) { cout << "Forever C++\n"; }


	Fraction f = (Fraction)vector;
	cout << f << endl;



	return 0;
}