#pragma once


// 1) Class Template

template<class T> // T = Date*
class DynamicArray {
	T* _array = nullptr;
	size_t _size = 0;

public:
	DynamicArray(size_t size) {
		_size = size;
		_array = new T[size];
	}

	void push_back(const T item);

	T& operator[](size_t index) {
		return _array[index];
	};

	const T* data() const {
		return _array;
	}
};

template<class T>
void DynamicArray<T>::push_back(const T item) {
	T* temp = new T[_size + 1];
	for (size_t i = 0; i < _size; i++)
		temp[i] = _array[i];
	T[_size] = item;
	delete[] _array;
	_array = temp;
	_size++;
}




struct Date {
	short day = 0;
	short month = 0;
	short year = 0;

	Date() = default;

	Date(short d, short m, short y)
	{
		day = d;
		month = m;
		year = y;
	}
};


ostream& operator<<(ostream& out, const Date d)
{
	cout << d.day << '.' << d.month << '.' << d.year;
	return out;
}



void mainClass() {
	size_t size = 10;

	DynamicArray<Date*> arr(size);

	for (size_t i = 0; i < size; i++)
		arr[i] = new Date(i + 1, 6, 2022);

	for (size_t i = 0; i < size; i++)
		cout << *arr[i] << endl; // Date

	DynamicArray<int> arr2(size);



	cout << endl;
	cin.get();
}