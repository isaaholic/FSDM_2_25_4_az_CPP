//#include <iostream>
//
//using namespace std;
//
//// Data Structure
//// Stack (FILO)
//// Queue (FIFO)
//
//
//
//// Push: Add an element to the top of a stack
//// Pop : Remove an element from the top of a stack
//// IsEmpty : Check if the stack is empty
//// IsFull : Check if the stack is full
//// Peek : Get the value of the top element without removing it
//
//
//#define MAX 3
//
//class Stack
//{
//	int _container[MAX]{};
//	int _top = -1;
//
//public:
//	Stack() = default;
//
//	void push(int element)
//	{
//		if (isFull())
//			throw "Stack overflow";
//
//		_container[++_top] = element;
//	}
//	void pop()
//	{
//		if (isEmpty())
//			throw "Stack underflow";
//
//		_top--;
//	}
//	int peek() const // top
//	{
//		if (isEmpty())
//			throw "Stack is Empty";
//
//		return _container[_top];
//	}
//
//	bool isEmpty() const { return _top == -1; }
//	bool isFull() const { return _top + 1 == MAX; }
//	int size() const { return _top + 1; }
//
//	const int* getContainer() const
//	{
//		return _container;
//	}
//};
//
//
//int main()
//{
//	Stack items;
//
//	items.push(5);
//	items.push(7);
//	items.push(9);
//
//
//	while (!items.isEmpty())
//	{
//		cout << items.peek() << endl;
//		items.pop();
//	}
//
//	cout << items.getContainer()[0] << endl;
//	cout << "Is full: " << items.isFull() << endl;
//	cout << "Size: " << items.size() << endl;
//}
//
//#include <iostream>
//
//using namespace std;
//
//// Data Structure
//// Stack (FILO)
//// Queue (FIFO)
//
//
//struct Date {
//	short day;
//	short month;
//	short year;
//};
//
//ostream& operator<<(ostream& out, const Date& d) {
//	out << d.day << '.' << d.month << '.' << d.year;
//	return out;
//}
//
//
//
//
//
//template<typename T, int MAX = 3>
//class Stack
//{
//	T _container[MAX]{};
//	int _top = -1;
//
//public:
//	Stack() = default;
//
//	void push(T element)
//	{
//		if (isFull())
//			throw "Stack overflow";
//
//		_container[++_top] = element;
//	}
//	void pop()
//	{
//		if (isEmpty())
//			throw "Stack underflow";
//
//		_top--;
//	}
//	T peek() const // top
//	{
//		if (isEmpty())
//			throw "Stack is Empty";
//
//		return _container[_top];
//	}
//
//	bool isEmpty() const { return _top == -1; }
//	bool isFull() const { return _top + 1 == MAX; }
//	int size() const { return _top + 1; }
//
//	const T* getContainer() const
//	{
//		return _container;
//	}
//};
//
//
//int main()
//{
//	//Stack<string, 3> items;
//	Stack<Date, 2> items;
//
//	try
//	{
//		//items.push("Azer");
//		//items.push("Fidan");
//		//items.push("Zeynal");
//
//
//		items.push({ 1, 6, 2020 });
//		items.push({ 6, 12, 2005 });
//		items.push({ 28, 2, 1999 });
//
//	}
//	catch (const char* ex)
//	{
//		cout << "Exception occured! " << ex << endl;
//	}
//
//
//	while (!items.isEmpty())
//	{
//		cout << items.peek() << endl;
//		items.pop();
//	}
//
//}

#include <iostream>

using namespace std;

// Data Structure
// Stack (FILO)
// Queue (FIFO)


struct Date {
	short day;
	short month;
	short year;
};

ostream& operator<<(ostream& out, const Date& d) {
	out << d.day << '.' << d.month << '.' << d.year;
	return out;
}





template<typename T, int MAX = 10>
class SimpleQueue
{
	T _container[MAX]{};
	int _front = -1;
	int _rear = -1;

public:
	SimpleQueue() = default;

	void enQueue(T element)
	{
		if (isFull())
			throw "Queue overflow";

		if (isEmpty())
			_front = 0;

		_container[++_rear] = element;
	}


	void deQueue()
	{
		if (isEmpty())
			throw "Queue underflow";

		_front++;

		if (_front > _rear)
			_front = _rear = -1;
	}


	T peek() const // front
	{
		if (isEmpty())
			throw "Queue is Empty";

		return _container[_front];
	}

	int size() const
	{
		if (_front == -1)
			return 0;

		return _rear - _front + 1;
	}

	bool isEmpty() const { return size() == 0; }
	bool isFull() const { return size() == MAX; }


	const T* getContainer() const
	{
		return _container;
	}
};


int main()
{
	SimpleQueue<string, 3> items;


	try
	{
		items.enQueue("Omar");
		items.enQueue("Yusuf");
		items.enQueue("Madina");
	}
	catch (const char* ex)
	{
		cout << "Exception occured! " << ex << endl;
	}


	while (!items.isEmpty())
	{
		cout << items.peek() << endl;
		items.deQueue();
	}


	////// 

	//items.enQueue("Red");

	//while (!items.isEmpty())
	//{
	//	cout << items.peek() << endl;
	//	items.deQueue();
	//}

}