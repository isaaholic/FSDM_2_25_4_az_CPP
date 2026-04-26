#pragma once



// 2) Specialization template class

template<class T>
class DynamicArraySpecial {
	T* _array = nullptr;
	size_t _size = 0;

public:
	DynamicArraySpecial(size_t size) {
		cout << "General\n";
		_size = size;
		_array = new T[size];
	}

	T& operator[](size_t index) {
		return _array[index];
	};
};


template<>
class DynamicArraySpecial<char> {
	char* _array = nullptr;
	size_t _size = 0;

public:
	DynamicArraySpecial(size_t size) {
		cout << "Special\n";
		_size = size;
		_array = new char[size];
	}

	char& operator[](size_t index) {
		return _array[index];
	};
};



void mainSpecial() {
	size_t size = 10;

	DynamicArraySpecial<int> arr(size);

	for (size_t i = 0; i < size; i++)
	{
		arr[i] = i + 65;
		cout << arr[i] << ' ';
	}



	cout << endl;
	cin.get();
}