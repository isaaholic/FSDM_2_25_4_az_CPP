#pragma once

class Vector
{
	int* _array = nullptr;
	size_t _size = 0; // index
	size_t _capacity = 0;
public:

	Vector(size_t capacity = 4)
	{
		_capacity = capacity;
		_array = new int[_capacity];
	}


	void push_back(int item)
	{
		if (_size < _capacity)
		{
			_array[_size++] = item;
			return;
		}


		_capacity *= 2;
		int* temp = new int[_capacity];

		for (size_t i = 0; i < _size; i++)
			temp[i] = _array[i];

		temp[_size++] = item;

		delete[] _array;
		_array = temp;

	}


	size_t size() const { return _size; }
	size_t capacity() const { return _capacity; }

	void print() const
	{
		for (size_t i = 0; i < _size; i++)
			cout << _array[i] << ' ';
		cout << endl;
	}


	// zero based index
	int& operator[](const size_t& index) const
	{
		return _array[index];
	}


	void operator()() const
	{
		this->print();
	}


	// explicit keyword
	operator int() {
		int sum = 0;

		for (size_t i = 0; i < _size; i++)
			sum += _array[i];

		return sum;
	}


	explicit operator bool() {
		return _size;
	}


	explicit operator Fraction() {
		return Fraction(_size, _capacity);
	}


	~Vector()
	{
		delete[] _array;
	}
};
