#pragma once



// Nontype template arguments

template<class T, size_t size = 4> // const
class DynamicArrayNonType {
	T* _array = nullptr;

public:
	DynamicArrayNonType() {
		_array = new T[size];
	}

	T& operator[](size_t index) {
		return _array[index];
	};
};



void mainNonType() {
	// DynamicArrayNonType<int> arr; // Default

	const size_t size = 10;
	DynamicArrayNonType<int,size> arr;

	/*const int size = 5;
	DynamicArrayNonType<char, size> arr;


	for (size_t i = 0; i < size; i++)
	{
		arr[i] = i + 65;
		cout << arr[i] << ' ';
	}*/


	cout << endl;
	cin.get();
}