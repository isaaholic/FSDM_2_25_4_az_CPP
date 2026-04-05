#include <iostream>

using namespace std;

typedef unsigned short ushort_t;

int mystrlen(const char* str)
{
	int len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return len;
}

void mystrcpy(char*& str1, const char* str2)
{
	if (str1 != nullptr)
	{
		delete[] str1;
		str1 = nullptr;
	}
	int len = mystrlen(str2) + 1;
	str1 = new char[len];
	for (int i = 0; i < len; i++)
	{
		str1[i] = str2[i];
	}
}

void mystrcat(char*& str1, const char* str2)
{
	ushort_t str1Len = mystrlen(str1);
	ushort_t len = str1Len + mystrlen(str2) + 1;
	char* temp = new char[len];
	if (str1 != nullptr)
	{
		for (ushort_t i = 0; str1[i] != '\0'; i++)
		{
			temp[i] = str1[i];
		}
		for (ushort_t i = str1Len; i < len - 1; i++)
		{
			temp[i] = str2[i - str1Len];
		}
		temp[len - 1] = '\0';
		delete[] str1;
		str1 = temp;
	}
	else
	{
		str1 = new char[len];
		for (ushort_t i = 0; i < len - 1; i++)
		{
			str1[i] = str2[i];
		}
		str1[len - 1] = '\0';
	}
}

char* mystrchr(char* str, char s)
{
	while (*str)
	{
		if (*str == s) return str;
		str++;
	}
	return nullptr;
}

char* mystrstr(char* str1, const char* str2)
{
	while (*str1)
	{
		if (*str1 == *str2)
		{
			char* temp1 = str1;
			const char* temp2 = str2;
			while (*temp1 && *temp2 && *temp1 == *temp2)
			{
				temp1++;
				temp2++;
			}
			if (*temp2 == '\0')
				return str1;
		}
		str1++;
	}

	return nullptr;
}

int mystrcmp(const char* str1, const char* str2)
{
	int len1 = mystrlen(str1);
	int len2 = mystrlen(str2);
	if (len1 > len1)
		return 1;
	else if (len1 < len2)
		return -1;
	while (*str1 && *str2)
	{
		if (*str1 == *str2)
		{
			str1++;
			str2++;
		}
		else if (*str1 > *str2)
		{
			return 1;
		}
		else
			return -1;
	}
	return *str1 - *str2;
}

int mystrtonum(char* str)
{
	int num = 0;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			num = num * 10 + (*str - '0');
			str++;
		}
		else
			return -1;
	}
	return num;
}

char* mynumtostr(int number)
{
	int lennum = 0;
	int tempnum = number;
	while (tempnum < 0)
	{
		tempnum /= 10;
		lennum++;
	}
	char* str = new char[lennum + 1];
	str[lennum] = '\0';
	tempnum = number;
	while (tempnum < 0)
	{
		str[--lennum] = (tempnum % 10) + '0';
		tempnum /= 10;
	}
	return str;
}

int main()
{
	// Task 1
	char str[] = "salam";
	cout << "Len: " << mystrlen(str) << endl;
	// Task 2
	char* str1 = nullptr;
	mystrcpy(str1, str);
	cout << "Str1: " << str1 << endl;
	// Task 3
	mystrcat(str1, " dunya");
	cout << "Str1: " << str1 << endl;
	// Task 4
	char* res = mystrchr(str1, 'l');
	res ? cout << "Res: " << res << endl : cout << "Not found" << endl;
	// Task 5
	char* res2 = mystrstr(str1, "un");
	res2 ? cout << "Res2: " << res2 << endl : cout << "Not found" << endl;


	delete str1;
}