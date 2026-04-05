//#include <iostream>
//
//using namespace std;
//
//// C style string
//// \0 null terminator
//
//int main() {
//	//// way 1
//	//char str[6]{ 'S', 'a', 'l', 'a', 'm' };
//	//cout << str << endl;
//	 //// way 2
//	 //char str[]{ 'S', 'a', 'l', 'a', 'm', '\0'};
//	 //cout << str << endl;
//
//
//
//	// // way 3
//	//char str[] = "Mahmud";
//	//cout << str << endl;
//
//
//
//
//	// // way 4
//	//const char* str = "salam";
//	//cout << str << endl;
//	//// 
//	//int len = strlen(str);
//	//// 
//	// cout << "Len: " << len << endl;
//
//
//
//
//	 //const char* str = "salam";
//	 //cout << str << endl;
//	 //cout << &str[0] << endl;
//	// 
//	// 
//	// // cout << str[2] << endl;
//	// cout << &str[2] << endl;
//
//
//
//
//
//
//
//	 //char* txt = new char[6] {'T', 'u', 'r', 'a', 'l', '\0' };
//	 //cout << txt << endl;
//	 //delete[] txt;
//
//
//
//
//
//	
//	char text[30];
//
//	cout << "Enter text: ";
//	cin.getline(text, 30);
//
//	size_t len = strlen(text) + 1;
//
//	char* fixedText = new char[len];
//
//	strcpy_s(fixedText, len, text);
//	fixedText[len - 2] = '!';
//	cout << "Text: " << fixedText << endl;
//	delete[] fixedText;
//}

#include <iostream>

using namespace std;

#pragma warning(disable: 4996)


char* mystrchr(char* str, char ch)
{
	while (*str)
	{
		if (*str == ch)
			return str;
		str++;
	}
	return nullptr;
}

int main() {

	/*{
		char name[30];
		char surname[30];

		cout << "Enter name: ";
		cin.getline(name, 30);

		cout << "Enter surname: ";
		cin.getline(surname, 30);

		size_t lenName = strlen(name) + 1;
		size_t lenSurname = strlen(surname) + 1;

		char* fixedName = new char[lenName];
		char* fixedSurname = new char[lenSurname];

		strcpy_s(fixedName, lenName, name);
		strcpy_s(fixedSurname, lenSurname, surname);

		cout << "Name: " << fixedName << endl;
		cout << "Surname: " << fixedSurname << endl;
		delete[] fixedName;
		delete[] fixedSurname;
	}*/









	/*{
		char* name = new char[30]{};
		char* surname = new char[30]{};

		cin >> name >> surname;

		size_t nameLen = strlen(name);
		size_t surnameLen = strlen(surname);


		size_t fullNameLen = nameLen + surnameLen + 2;

		char* fullName = new char[fullNameLen] {};

		strcpy_s(fullName, fullNameLen, name);
		strcat_s(fullName, fullNameLen, " ");
		strcat_s(fullName, fullNameLen, surname);
		cout << strlen(fullName) << endl;

		cout << fullName;
	}*/
	//abort();
}

