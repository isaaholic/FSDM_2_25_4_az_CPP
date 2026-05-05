#include <iostream>

//#include <queue>
//
using namespace std;
//
//int main()
//{
//	queue<int> q;
//	// push - element elave edir
//	q.push(1);
//	// emplace - element elave edir, amma pushdan ferqli olaraq, emplace elementin ozunu elave edir, push ise elementin kopyasini elave edir
//	q.emplace(2);
//	// front - queue-nun ilk elementini gosterir
//	cout << "Front: " << q.front() << endl; // 1
//	// back - queue-nun son elementini gosterir
//	cout << "Back: " << q.back() << endl; // 2
//	// pop - queue-nun ilk elementini silir
//	q.pop();
//	cout << "Front: " << q.front() << endl; // 2
//	// size - queue-da nece element oldugunu gosterir
//	cout << "Size: " << q.size() << endl; // 1
//	// empty - queue-nun bos olub olmadigini gosterir
//	cout << "Empty: " << q.empty() << endl; // 0 (false)
//	queue<int> q2({2});
//	q2.push(3);
//	// swap - iki queue-nu bir birine deyisir
//	q.swap(q2);
//	cout << "Front: " << q.front() << endl; // 0 (q bos oldu)
//	cout << "Front: " << q2.front() << endl; // 2 (q2-nun ilk elementi 2 oldu)
//}

//// circular queue
//
//template<typename T, int size = 5>
//class CircularQueue
//{
//	T arr[size];
//	int front;
//	int rear;
//
//public:
//	CircularQueue()
//	{
//		front = -1;
//		rear = -1;
//	}
//
//	/// <summary>
//	/// enQueue - element elave edir
//	/// </summary>
//	void push(T element)
//	{
//		if ((rear + 1) % size == front)
//		{
//			std::cout << "Queue is full!" << std::endl;
//			return;
//		}
//		if (front == -1)
//			front = 0;
//		rear = (rear + 1) % size;
//		arr[rear] = element;
//	}
//
//	/// <summary>
//	/// deQueue - element silir
//	/// </summary>
//	void pop()
//	{
//		if (front == -1)
//		{
//			std::cout << "Queue is empty!" << std::endl;
//			return;
//		}
//		if (front == rear)
//		{
//			front = -1;
//			rear = -1;
//			return;
//		}
//		front = (front + 1) % size;
//	}
//
//	/// <summary>
//	/// display - queue-nun elementlerini gosterir
//	/// </summary>
//	void display()
//	{
//		if (front == -1)
//		{
//			std::cout << "Queue is empty!" << std::endl;
//			return;
//		}
//		int i = front;
//		while (true)
//		{
//			std::cout << arr[i] << " ";
//			if (i == rear)
//				break;
//			i = (i + 1) % size;
//		}
//		std::cout << std::endl;
//	}
//};
//
//int main()
//{
//	CircularQueue<int> q;
//	q.push(1);
//	q.push(2);
//	q.push(3);
//	q.push(4);
//	q.push(5); // Queue is full!
//	q.pop();
//	q.push(6);
//
//	q.display(); // 2 3 4 5 6
//
//	return 0;
//}

// priority queue

//template<typename T>
//class PriorityQueue
//{
//private:
//	struct Node
//	{
//		T data;
//		int priority;
//		Node* next;
//		Node(T data, int priority) : data(data), priority(priority), next(nullptr) {}
//	};
//public:
//	Node* head = nullptr;
//	void push(T element, int priority)
//	{
//		Node* newNode = new Node(element, priority);
//		if (head == nullptr || head->priority < priority)
//		{
//			newNode->next = head;
//			head = newNode;
//		}
//		else
//		{
//			Node* temp = head;
//			while (temp->next != nullptr && temp->next->priority >= priority)
//			{
//				temp = temp->next;
//			}
//			newNode->next = temp->next;
//			temp->next = newNode;
//		}
//	}
//
//	void deleteNode(Node* node)
//	{
//		if (head == nullptr)
//		{
//			cout << "Queue is empty!" << endl;
//			return;
//		}
//		if (head == node)
//		{
//			Node* temp = head;
//			head = head->next;
//			delete temp;
//			return;
//		}
//
//		Node* temp = head;
//
//		while (temp->data != node->data)
//		{
//			temp = temp->next;
//			if (temp == nullptr)
//			{
//				cout << "Node not found!" << endl;
//				return;
//			}
//		}
//		Node* prev = head;
//		while (prev != nullptr)
//		{
//			if (prev->next == temp)
//			{
//				prev->next = temp->next;
//				delete temp;
//				return;
//			}
//			prev = prev->next;
//		}
//	}
//
//	void display()
//	{
//		Node* temp = head;
//		while (temp != nullptr)
//		{
//			cout << temp->data << " (priority: " << temp->priority << ") " << endl;
//			temp = temp->next;
//		}
//		cout << endl;
//	}
//};
//
//int main()
//{
//	PriorityQueue<int> pq;
//	pq.push(1, 1);
//	pq.push(2, 2);
//	pq.push(3, 3);
//	pq.push(4, 4);
//	pq.push(5, 4);
//	pq.display();
//	pq.deleteNode(pq.head->next->next->next);
//	pq.display();
//	return 0;
//}

// deque - double ended queue

template <typename T>
class Deque
{
private:
	struct Node
	{
		T data;
		Node* next;
		Node* prev;
		Node(T data) : data(data), next(nullptr), prev(nullptr) {}
	};
public:
	Node* front = nullptr;
	Node* rear = nullptr;
	void pushFront(T element)
	{
		Node* newNode = new Node(element);
		if (front == nullptr)
		{
			front = rear = newNode;
			return;
		}
		newNode->next = front;
		front->prev = newNode;
		front = newNode;
	}
	void pushBack(T element)
	{
		Node* newNode = new Node(element);
		if (rear == nullptr)
		{
			front = rear = newNode;
			return;
		}
		newNode->prev = rear;
		rear->next = newNode;
		rear = newNode;
	}
	void popFront()
	{
		if (front == nullptr)
			return;
		Node* temp = front;
		if (front == rear)
			rear = nullptr;
		else
			front->next->prev = nullptr;
		front = front->next;
		delete temp;
	}
	void popBack()
	{
		if (rear == nullptr)
			return;
		Node* temp = rear;
		if (front == rear)
			front = nullptr;
		else
			rear->prev->next = nullptr;
		rear = rear->prev;
		delete temp;
	}
	void display()
	{
		Node* temp = front;
		while (temp != nullptr)
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << endl;
	}
};
