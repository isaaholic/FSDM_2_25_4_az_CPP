#pragma once

// 1) class -> function
// 2) class -> class
// 3) class -> method (member function)



#pragma region Example_1


class Point
{
	int _x;
	int _y;

	friend void changePoint(Point& p);

public:
	Point(int x, int y)
	{
		_x = x;
		_y = y;
	}

	void print() const
	{
		cout << "X: " << _x << endl
			<< "Y: " << _y << endl;
	}
};



void changePoint(Point& p)
{
	p._x = 100;
	p._y = 200;
}





#pragma endregion




#pragma region Example_2

// class B;

class A
{
private:
	friend class B;

	int privateField = 0;

	void privateMethod() const
	{
		cout << "privateMethod\n";
	};

public:
	int publicField = 0;

	void publicMethod() const
	{
		cout << "publicMethod\n";
	};

	void print() const
	{
		cout << publicField << endl;
		cout << privateField << endl;
	}

	void changeB(B& obj)
	{
		cout << "Changed\n";
		obj.number = 10;
	}
};



class B
{
	friend class A;
	int number = 0;
	A a;
public:

	void showA(const A& obj)
	{
		cout << obj.publicField << endl;
		cout << obj.privateField << endl;

		obj.publicMethod();
		obj.privateMethod();
	}

	void changeA(A& obj)
	{
		cout << "Changed\n";
		obj.publicField = 10;
		obj.privateField = 10;
	}
};



#pragma endregion




#pragma region Example_3

class Remote;

class TV {
public:

	void changeValue(Remote& remote);
	void displayTV(Remote& remote);
};


class Remote {
private:
	friend void TV::displayTV(Remote& remote);
	int value = 0;

public:

	void print() const
	{
		cout << "Value: " << value << endl;
	}
};





void TV::changeValue(Remote& remote)
{
	remote.print();
	//remote.value = 10;
}

void TV::displayTV(Remote& remote)
{
	remote.value = 10;
	cout << remote.value << endl;
}




#pragma endregion