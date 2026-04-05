//#include <iostream>
//
//using namespace std;
//
//void createArr(int**& arr, int rowSize, int colSize)
//{
//	int** newArr = new int* [rowSize];
//
//	for (size_t i = 0; i < rowSize; i++)
//	{
//		newArr[i] = new int[colSize];
//	}
//
//	arr = newArr;
//}
//
//void fillArr(int**& arr, int rowSize, int colSize, int min = 0, int max = 20)
//{
//	for (size_t i = 0; i < rowSize; i++)
//	{
//		for (size_t j = 0; j < colSize; j++)
//		{
//			arr[i][j] = rand() % (max - min + 1) + min;
//		}
//	}
//}
//
//void printArr(int** arr, int rowSize, int colSize)
//{
//	for (size_t i = 0; i < rowSize; i++)
//	{
//		for (size_t j = 0; j < colSize; j++)
//		{
//			cout << arr[i][j] << ' ';
//		}
//		cout << endl;
//	}
//}
//
//int sumArr(int** arr, int rowSize, int colSize)
//{
//	int sum = 0;
//	for (size_t i = 0; i < rowSize; i++)
//	{
//		for (size_t j = 0; j < colSize; j++)
//		{
//			sum += arr[i][j];
//		}
//	}
//	return sum;
//}
//
//int sumOfDiagonal(int** arr, int rowSize, int colSize)
//{
//	int sum = 0;
//
//	for (size_t i = 0; i < rowSize; i++)
//		for (size_t j = 0; j < colSize; j++)
//			if (i == j)
//				sum += arr[i][j];
//
//	return sum;
//}
//
//int sumOfOppositeDiagonal(int** arr, int rowSize, int colSize)
//{
//	int sum = 0;
//	for (size_t i = 0; i < rowSize; i++)
//		for (size_t j = 0; j < colSize; j++)
//			if (j == rowSize - i - 1)
//				sum += arr[i][j];
//	return sum;
//}
//
//int findMin(int** arr, int rowSize, int colSize)
//{
//	int min = arr[0][0];
//	for (size_t i = 0; i < rowSize; i++)
//		for (size_t j = 0; j < colSize; j++)
//			if (arr[i][j] < min)
//				min = arr[i][j];
//	return min;
//}
//
//int findMax(int** arr, int rowSize, int colSize)
//{
//	int max = arr[0][0];
//	for (size_t i = 0; i < rowSize; i++)
//		for (size_t j = 0; j < colSize; j++)
//			if (arr[i][j] > max)
//				max = arr[i][j];
//	return max;
//}
//
//void deleteArr(int**& arr, int rowSize)
//{
//	for (size_t i = 0; i < rowSize; i++)
//	{
//		delete[] arr[i];
//	}
//	delete[] arr;
//	arr = nullptr;
//}
//
//int* sumOfRows(int** arr, int rowSize, int colSize)
//{
//	int* sumArr = new int[rowSize];
//	for (size_t i = 0; i < rowSize; i++)
//	{
//		sumArr[i] = 0;
//		for (size_t j = 0; j < colSize; j++)
//		{
//			sumArr[i] += arr[i][j];
//		}
//	}
//	return sumArr;
//}
//
//int* sumOfCols(int** arr, int rowSize, int colSize)
//{
//	int* sumArr = new int[colSize];
//	for (size_t j = 0; j < colSize; j++)
//	{
//		sumArr[j] = 0;
//		for (size_t i = 0; i < rowSize; i++)
//		{
//			sumArr[j] += arr[i][j];
//		}
//	}
//
//	return sumArr;
//}
//
//bool hasNegativeValue(int* arr, int size)
//{
//	for (size_t i = 0; i < size; i++)
//	{
//		if (arr[i] < 0)
//			return true;
//	}
//	return false;
//}
//
//int countOfNonNegativeRows(int** arr, int rowSize, int colSize)
//{
//	int count = 0;
//	for (size_t i = 0; i < rowSize; i++)
//	{
//		if (!hasNegativeValue(arr[i], colSize))
//			count++;
//	}
//	return count;
//}
//
//int* sumOfPositiveRows(int** arr, int rowSize, int colSize)
//{
//	int countOfNonNegative = countOfNonNegativeRows(arr, rowSize, colSize);
//	int* sumArr = new int[countOfNonNegative] {};
//	int index = 0;
//	for (size_t i = 0; i < rowSize; i++)
//	{
//		if (hasNegativeValue(arr[i], rowSize))
//			continue;
//		for (size_t j = 0; j < colSize; j++)
//		{
//			sumArr[index] += arr[i][j];
//		}
//		index++;
//		if (index >= countOfNonNegative)
//			break;
//	}
//
//	return sumArr;
//}
//
//void myCustomSwap(int**& arr, int rowSize, int colSize)
//{
//	for (size_t i = 0; i < rowSize; i++)
//	{
//		int temp = arr[i][0];
//		arr[i][0] = arr[i][colSize - 1];
//		arr[i][colSize - 1] = temp;
//		temp = arr[i][1];
//		arr[i][1] = arr[i][colSize - 2];
//		arr[i][colSize - 2] = temp;
//	}
//}
//
//void swapNeighboringRows(int**& arr, int rowSize, int colSize)
//{
//	for (size_t i = 0; i < rowSize - 1; i += 2)
//	{
//		int* temp = arr[i];
//		arr[i] = arr[i + 1];
//		arr[i + 1] = temp;
//	}
//}
//
//int main()
//{
//	cout << "Task 1:" << endl;
//	int** my2dArr = nullptr;
//	int rowSize = 5;
//	int colSize = 5;
//	createArr(my2dArr, rowSize, colSize);
//	fillArr(my2dArr, rowSize, colSize);
//	printArr(my2dArr, rowSize, colSize);
//	int sum = sumArr(my2dArr, rowSize, colSize);
//	cout << "Sum: " << sum << endl;
//	deleteArr(my2dArr, rowSize);
//
//	cout << "Task 2:" << endl;
//	createArr(my2dArr, rowSize, colSize);
//	fillArr(my2dArr, rowSize, colSize);
//	printArr(my2dArr, rowSize, colSize);
//	int diagonalSum = sumOfDiagonal(my2dArr, rowSize, colSize);
//	cout << "Diagonal Sum: " << diagonalSum << endl;
//	int oppositeDiagonalSum = sumOfOppositeDiagonal(my2dArr, rowSize, colSize);
//	cout << "Opposite Diagonal Sum: " << oppositeDiagonalSum << endl;
//	deleteArr(my2dArr, rowSize);
//
//	cout << "Task 3:" << endl;
//	createArr(my2dArr, rowSize, colSize);
//	fillArr(my2dArr, rowSize, colSize, -100, 100);
//	printArr(my2dArr, rowSize, colSize);
//	int min = findMin(my2dArr, rowSize, colSize);
//	cout << "Min: " << min << endl;
//	int max = findMax(my2dArr, rowSize, colSize);
//	cout << "Max: " << max << endl;
//	deleteArr(my2dArr, rowSize);
//
//	cout << "Task 5:" << endl;
//	createArr(my2dArr, rowSize, colSize);
//	fillArr(my2dArr, rowSize, colSize);
//	printArr(my2dArr, rowSize, colSize);
//	int* sumRows = sumOfRows(my2dArr, rowSize, colSize);
//	for (size_t i = 0; i < rowSize; i++)
//	{
//		cout << "Sum of row " << i << ": " << sumRows[i] << endl;
//	}
//
//	return 0;
//}




#include <iostream>
#include <iomanip>

using namespace std;

int addition(int num1, int num2)
{
	return num1 + num2;
}

int substraction(int num1, int num2)
{
	return num1 - num2;
}

int calc(int num1, int num2, int (*fncPtr)(int, int))
{
	return fncPtr(num1, num2);
}

void showEven(int min, int max)
{
	for (int i = min; i <= max; i++)
		if (!(i % 2)) cout << i;
}

void fillArr(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 30;
	}
}

void showArr(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
}

int* instertBlockToArr(int* arr, int* size, int* block, int* blockSize, int index)
{
	int* newArr = new int[*size + *blockSize];

	for (int i = 0; i < index; i++)
	{
		newArr[i] = arr[i];
	}

	for (int i = index, j = 0; i < index + *blockSize; i++, j++)
	{
		newArr[i] = block[j];
	}

	for (int i = index + *blockSize, j = index; i < *size + *blockSize; i++, j++)
	{
		newArr[i] = arr[j];
	}

	*size += *blockSize;
	delete[] arr;
	arr = nullptr;
	return newArr;
}

int main()
{
	srand(time(NULL));
	//int (*fncPtr)(int, int); // function pointer - pointer to function
	//fncPtr = addition;
	//int num1, num2;
	//cout << "Enter num1, num2";
	//cin >> num1 >> num2;
	//char op;
	//cout << "Enter op: ";
	//cin >> op;



	//switch (op)
	//{
	//case '+':
	//	fncPtr = addition;
	//	break;
	//case '-':
	//	fncPtr = substraction;
	//	break;
	//default:
	//	break;
	//}
	//cout << calc(num1, num2, fncPtr);

	void* ptr;
	int x = 5;
	double y = 3;

	ptr = &x;
	int* intPtr = &x;
	cout << *(int*)ptr << endl;
	cout << *intPtr << endl;
	ptr = &y;
	cout << ptr << endl;

}