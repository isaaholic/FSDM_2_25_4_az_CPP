#include <iostream>
#include <iomanip>


using namespace std;
//
//// rethrow
//// inner exception
//
//int calculate(int* a, int* b) throw(exception)
//{
//	if (a == NULL || b == NULL)
//		throw exception("NullException");
//
//	return *a + *b;
//}
//
//
//int main()
//{
//
//	try
//	{
//		try
//		{
//			cout << calculate(NULL, new int(2)) << endl;
//		}
//		catch (const exception& ex)
//		{
//			cout << "(inner) Exception occured -> " << ex.what() << endl;
//			throw; // Rethrow the exception to be caught by the outer catch block
//		}
//	}
//	catch (const exception& ex)
//	{
//		cout << "(outer) Exception occured -> " << ex.what() << endl;
//	}
//
//
//
//	cout << "Terminated\n";
//	return 0;
//}

void addNumber(int*& arr, int& size, const int& number) {
	int* newArr = new int[size + 1];

	for (size_t i = 0; i < size; i++)
		newArr[i] = arr[i];

	newArr[size++] = number;

	delete[] arr;
	arr = newArr;
}


int main()
{
	/*
		cout << showpos;
		cout << noshowpos;

		cout << -5 << endl;
		cout << 5 << endl;
	*/



	/*
		cout << boolalpha;
		// cout << noboolalpha;

		cout << true << endl;
		cout << false << endl;
	*/




	/*
	const int size = 3;
	int arr[size][size]{ 213411, 43532, 543, 4546, 554, 654, 745, 8, 5464569 };

	//cout << left;
	cout << right;


	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
			cout << setw(10) << arr[i][j];
		cout << endl;
	}
	*/







	//char* data = new char[20];

	//cout << "Enter data: ";
	//cin >> data;
	//cout << "\nData is " << data << endl;

	//cin >> data;
	//cout << "\nData is " << data << endl;







		//char* data = new char[20]{};

		//cout << "Enter data: ";
		//cin.getline(data, 20);
		//cout << "\nData is " << data << endl;




	/*
		string data;

		cout << "Enter data: ";

		// cin >> data;
		getline(cin, data);

		cout << "\nData is " << data << endl;
	*/







	// TASK: Istifadeci istediyi qeder reqem daxil edir, hemin reqemleri array-a yigin.
	// showpos
	// setw (left)
	// dynamic array


	cout << showpos << left;

	int number;
	int size = 0;
	int* arr = new int[size];
	cout << "Enter numbers: ";

	// cin.peek() - streamdeki novbeti karakteri streamden silmeden goturu

	//char c = cin.peek();

	//cout << "Novbeti karakter: " << c << endl;
	//char* c2 = new char[10];
	//cin >> c2;
	//cout << c2 << endl;

	char c;
	do
	{
		getchar();
	} while (cin.peek() != 33);

	/*do
	{
		cin >> number;
		addNumber(arr, size, number);

	} while (cin.peek() != 10);

	for (size_t i = 0; i < size; i++)
		cout << setw(5) << arr[i];*/

}