#include <iostream>
#include <iomanip>

using namespace std;

void printArr(int* arr, int rowSize, int colSize)
{
	for (int i = 0; i < rowSize; i++)
	{
		for (int j = 0; j < colSize; j++)
		{
			cout << i << ',' << j << " : " << setw(12) << arr[j + i * rowSize];
		}
		cout << endl;
	}
}

// printArr(my2dArr[0], 2, 3);

int main()
{
	// \0 -> null-terminator dur menasi ise NULL dur

	srand(time(0));
	//cout << left;
	////cout << setw(10);
	//cout << setw(15) << "Ad: " << setw(10) << "Isa" << endl;
	////cout << setw(15) << "Soyad: " << setw(10) << "Mammadli" << endl;
	////cout << right;
	////cout << setw(15) << "Yas: " << setw(10) << "22" << endl;
	////cout << setw(15) << "Qan Qrupu: " << setw(10) << "O+" << endl;
	//cout << boolalpha;
	//cout << true << endl;
	//cout << false << endl;


	//int tests[2] = { 2,3 };
	//int test[2][3] = { 
	//	{2, 4, 5}, 
	//	{9, 0, 19} 
	//};

	//int test[2][3] = { 2, 4, 5, 9, 0, 19 };

	//cout << left;

	//for (int i = 0; i < 2; i++)
	//{
	//	for (int j = 0; j < 3; j++)
	//	{
	//		cout << i << ',' << j << " : " << setw(12) << test[i][j];
	//	}
	//	cout << endl;
	//}



	//cout << test << endl;
	//cout << test[0] << endl;
	//cout << &test[0][0] << endl;















	//int myArr[3] = { 1,2,3 };

	//for (int i = 0; i < 3; i++)
	//{
	//	cout << *(myArr + i) << endl;
	//}

	int my2dArr[2][3] = { 1,2,3,4,5,6 };


	//for (int i = 0; i < 2; i++)
	//{
	//	for (int j = 0; j < 3; j++)
	//	{
	//		// i 0
	//		cout << *(*my2dArr+j+i*3) << endl;
	//	}
	//}
	/*cout << left;

	int* arr = new int[3] { 1, 2, 3 };
	int* arr2d = new int[2 * 3] { 1, 2, 3, 4, 5, 6 };

	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			cout << i << ", " << j << ": " << setw(10) << arr2d[j + i * 3];
		}
		cout << endl;
	}

	cout << endl << endl;

	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 2; j++)
		{
			cout << i << ", " << j << ": " << setw(10) << arr2d[j + i * 2];
		}
		cout << endl;
	}*/

	//delete[] arr;

	/*int*** arr = new int** [3] {
		new int* [2] {
			new int[2]},
			new int* [2] {new int[2]},
			new int* [2] {new int[2]}
		};*/

	// Example usage to ensure the array works as intended
	//for (int i = 0; i < 3; i++) {
	//	for (int j = 0; j < 2; j++) {
	//		arr[i][j] = rand()%10; // Assigning some values
	//		cout << "arr[" << i << "][" << j << "] = " << arr[i][j] << endl;
	//	}
	//}
	//cout << arr << endl;
	//cout << arr[0] << endl;
	//cout << arr[0][0] << endl;
	//cout << &arr[0][0][0] << endl;
	//// Clean up memory
	//for (int i = 0; i < 3; i++) {
	//	delete[] arr[i];
	//}
	//delete[] arr;
}

// Example usage in main:
/*
int test[2][3] = { {2, 4, 5}, {9, 0, 19} };
printArr(&test[0][0], 2, 3);
*/
