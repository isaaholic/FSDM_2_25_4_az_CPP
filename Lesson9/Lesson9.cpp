#include <iostream>

using namespace std;

// // by value     (copy)
// // by reference (self)
// // by pointer   (address)
// 
 void display(int* x) {
 	*x = 42;
 	cout << "display: " << *x << endl;
 }
 
 int main()
 {
 	int num = 10;
 	display(&num);
 	cout << "main: " << num << endl;
 }
//
//int main()
//{
//	// Variable - adi, tipi, olchusu, deyeri, adresi
//	// olan RAM-da saxlanilan yaddash sahesidir.
//
//	// Pointer - her hansisa deysihenin adresini
//	// saxlayan bir deyishendir.
//
//
//
//
//	// & address of
//
//
//
//	//int number = 10;
//	//int* ptr = &number;
//	//double dnumber = 3.14;
//	//double* dptr = &dnumber;
//
//	//cout << sizeof ptr << endl;
//	//cout << sizeof number << endl;
//	//cout << sizeof dnumber << endl;
//	//cout << sizeof dptr << endl;
//
//	//cout << typeid(number).name() << endl;
//	//cout << typeid(ptr).name() << endl;
//
//	//// cout << number << endl;
//	//cout << ptr << endl;
//	//cout << &ptr << endl;
//	//cout << &number << endl;
//
//
//
//
//	// ///////////////////////////////////
//	// * dereference operator / indirection
//	// 
//	// 
//	// 
//	//int number = 10;
//	//int data = 50;
//	//int* ptr1 = &number;
//	//int* ptr2 = &number;
//	//// 
//	//*ptr1 = 30;
//	//number = 20;
//	//// 
//	//ptr1 = &data;
//	//// 
//	//*ptr2 = 25;
//	//*ptr1 = 100;
//	//// 
//	//cout << number << endl;
//	//cout << data << endl;
//	//cout << *ptr1 << endl;
//	//cout << *ptr2 << endl;
//	//cout << ptr1 << endl;
//	//cout << ptr2 << endl;
//	//cout << &data << endl;
//	//cout << &number << endl;
//
//
//
//
//
//
//	// ///////////////////////////////////
//	// 
//	//// // Swap with pointers
//	//double x = 15.3;
//	//double y = 77.57;
//	//double temp;
//	//// 
//	//double* xPtr = &x;
//	//double* yPtr = &y;
//	//double* tempPtr = &temp;
//	//// 
//	//// 
//	//*tempPtr = *xPtr;
//	//*xPtr = *yPtr;
//	//*yPtr = *tempPtr;
//	//// 
//	//cout << x << ' ' << y << endl;
//
//
//
//
//	// ///////////////////////////////////
//
//	int x, y, * xPtr, * yPtr;
//	// 
//	// cout << "Enter number 1: ";
//	// cin >> x;
//	// 
//	// cout << "Enter number 2: ";
//	// cin >> y;
//	// 
//	// xPtr = &x;
//	// yPtr = &y;
//	// 
//	// if (*xPtr > *yPtr) cout << *xPtr << endl;
//	// else cout << *yPtr << endl;
//
//
//
//
//
//	//float n1, n2;
//	//char op;
//
//	//float* n1Ptr = &n1;
//	//float* n2Ptr = &n2;
//	//char* opPtr = &op;
//
//
//	//cout << "Enter number 1: ";
//	//cin >> n1;
//
//	//cout << "Enter operation (*, /, +, -): ";
//	//cin >> op;
//
//	//cout << "Enter number 2: ";
//	//cin >> n2;
//
//	//float result = 0;
//
//	//switch (*opPtr)
//	//{
//	//case '*':
//	//	result = *n1Ptr * *n2Ptr;
//	//	break;
//	//case '/':
//	//	result = *n1Ptr / *n2Ptr;
//	//	break;
//	//case '+':
//	//	result = *n1Ptr + *n2Ptr;
//	//	break;
//	//case '-':
//	//	result = *n1Ptr - *n2Ptr;
//	//	break;
//	//default:
//	//	cout << "Error\n";
//	//	break;
//	//}
//
//	//cout << *n1Ptr << ' '
//	//	<< *opPtr << ' '
//	//	<< *n2Ptr << " = " << result;
//
//
//	 //int x = 10;
//	 //int* xptr = &x;
//	 //double* dptr = &x; // error
//
//	//int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
//	//int n = sizeof arr / sizeof arr[0];
//
//
//	//cout << "Unsorted array: ";
//
//	//for (int i = 0; i < n; i++)
//	//	cout << arr[i] << ' ';
//	//cout << endl;
//
//
//
//	//// Bubble sort
//
//	//bool swapped;
//	//int temp;
//	//for (int i = 0; i < n - 1; i++)
//	//{
//	//	swapped = false;
//	//	for (int j = 0; j < n - i - 1; j++)
//	//	{
//	//		if (arr[j] > arr[j + 1])
//	//		{
//	//			temp = arr[j];
//	//			arr[j] = arr[j + 1];
//	//			arr[j + 1] = temp;
//
//	//			swapped = true;
//	//		}
//	//	}
//
//	//	if (swapped == false)
//	//		break;
//	//}
//
//
//
//	//cout << "Sorted array: ";
//
//	//for (int i = 0; i < n; i++)
//	//	cout << arr[i] << ' ';
//	//cout << endl;
//
//
//	//int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
//	//int n = sizeof arr / sizeof arr[0];
//
//
//	//cout << "Unsorted array: ";
//
//	//for (int i = 0; i < n; i++)
//	//	cout << arr[i] << ' ';
//	//cout << endl;
//
//
//
//	//// Insertion sort
//
//	//int key, j;
//
//	//for (int i = 1; i < n; i++) // 3
//	//{
//	//	key = arr[i];
//	//	j = i - 1;
//
//	//	while (j >= 0 && arr[j] > key)
//	//	{
//	//		arr[j + 1] = arr[j];
//	//		j = j - 1;
//	//	}
//	//	arr[j + 1] = key;
//	//}
//
//
//
//	//cout << "Sorted array: ";
//
//	//for (int i = 0; i < n; i++)
//	//	cout << arr[i] << ' ';
//	//cout << endl;
//
//	int arr[] = { 64, 25, 12, 22, 11 };
//	int n = sizeof arr / sizeof arr[0];
//
//
//	cout << "unsorted array: ";
//
//	for (int i = 0; i < n; i++)
//		cout << arr[i] << ' ';
//	cout << endl;
//
//
//
//	// selection sort
//
//	int min_idx, temp;
//
//	for (int i = 0; i < n - 1; i++)
//	{
//		min_idx = i;
//		for (int j = i + 1; j < n; j++)
//			if (arr[j] < arr[min_idx])
//				min_idx = j;
//
//		temp = arr[min_idx];
//		arr[min_idx] = arr[i];
//		arr[i] = temp;
//	}
//
//
//
//	cout << "sorted array: ";
//
//	for (int i = 0; i < n; i++)
//		cout << arr[i] << ' ';
//	cout << endl;
//
//	//int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
//	//int n = sizeof arr / sizeof arr[0];
//
//
//	//// Linear Search
//	//int find = 13;
//	//bool isFind = false;
//
//	//for (int i = 0; i < n; i++)
//	//{
//	//	if (arr[i] == find) {
//	//		isFind = true;
//	//		break;
//	//	}
//	//}
//
//	//isFind ? cout << "Found\n" : cout << "Can not find\n";
//
////int arr[] = { 11, 12, 22, 25, 34, 64, 90 };
////int n = sizeof arr / sizeof arr[0];
////
////// Binary Search
////bool result = false;
////int x = 33;
////
////int h = n - 1;
////int l = 0;
////int mid;
////
////while (h >= l) {
////	mid = (l + h) / 2;
////
////	if (arr[mid] == x) {
////		result = true;
////		break;
////	}
////	else if (arr[mid] > x)
////		h = mid - 1;
////	else
////		l = mid + 1;
////
////}
////
////
////(result)
////? cout << "Element is present at index: " << mid << '\n'
////	: cout << "Element is not present in array: " << x << '\n';
//
//
//	return 0;
//}
