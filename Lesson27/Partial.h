#pragma once



//		2.1) Partial specialization template class


template<typename T1, typename  T2, int size>
class A {
public:
	A() { cout << "Primary template\n"; }
};


template<typename T, int size>
class A<T, T*, size> {
public:
	A() { cout << "partial specialization where T2 is a pointer" << endl; }
};


template<typename T>
class A<int, T, 0> {
public:
	A() { cout << "partial specialization where T1 is int, size is 0\n"; }
};


template<typename T1, typename T2, int size>
class A<T1, T2*, size> {
public:
	A() { cout << "partial specialization where T2 is a pointer and Different type...\n"; }
};




void mainPartialSpecial() {
	A<float, int*, 10> a;
	A<int, float, 0> b;
	A<double, double*, 52> c;
	A<int, double, 5> d;
}