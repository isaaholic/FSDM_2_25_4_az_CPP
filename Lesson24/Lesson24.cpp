#include <iostream>
#include <cassert>
#include <iomanip>
#include <string>

#include "models.h"

using namespace std;

int main()
{
	Debtor* debtor1 = new Debtor("John", "Doe", "123 Work St", "456 Home St", "555-1234", 5000.3532623, false, 1000.1412);
	Debtor debtor12 = Debtor("John", "Doe", "123 Work St", "456 Home St", "555-1234", 5000.3532623, false, 1000.1412);
	//debtor1->print();

	Bank bank("My Bank");
	bank.addDebtor(new Debtor("Alice", "Smith", "789 Work Ave", "321 Home Ave", "555-5678", 6000.987654, false, 500.75));
	bank.addDebtor(debtor1);
	Debtor debtor3;
	debtor3 = move(debtor12);
	debtor3.print();
	//bank.printAllDebtors();
	//bank.printDebtorsDebtGreaterThan(600);
	//bank.printDebtorsWithDelays();
	// 
	// 
	// 
	//string text = "Hello World Isa M";

	//cout << text << endl;
	//cout << text.size() << endl;    // same 
	//cout << text.length() << endl;  // same 
	//cout << text.max_size() << endl;
	//cout << text.capacity() << endl; // (16) - 1

	////// capacity, reserve, resize, shrink_to_fit

	//string str(50, '*');
	//cout << str << endl;
	//// 
	//cout << "1) Capacity: " << str.capacity() << endl;
	////  
	//str.resize(13);

	//cout << str << endl;
	//cout << "2) Capacity: " << str.capacity() << endl;
	////  
	//str.shrink_to_fit();
	//// 
	//cout << str << endl;
	//cout << "3) Capacity: " << str.capacity() << endl;
	//// 
	//str.reserve(5);
	//// 
	//cout << str << endl;
	//cout << "4) Capacity: " << str.capacity() << endl;







	//// clear, empty

	//string text = "Happy Programmers Day!";
	//cout << text << endl;

	//text.clear();
	//cout << "After clear" << endl;

	//if (text.empty())
	//	cout << "No data" << endl;
	//else
	//	cout << text << endl;

	//cout << text.capacity() << endl;

	//text.shrink_to_fit();
	//cout << text.capacity() << endl;







	//// string operator +=, +,  =, ==, []
	//// at method
	//string text = "StepIT Academy";
	//text[3] = 's';
	//cout << text[3] << endl;
	//cout << text << endl;

	// Hello
	// Hello3
	// Hel

	// string text = "Hello";
	// text += " Tural";
	// text = text + " bey";
	// cout << text << endl;



	// string text1 = "Hello";
	// string text2 = text1;
	// 
	// text1 += ' ';
	// text1 += "World";
	// 
	// cout << text1 << endl;
	// cout << text2 << endl;





	 //string text1 = "alma";
	 //string text2 = "alma";
	 //// cout << (text1 == text2) << endl;
	 //cout << text1.compare(text2) << endl;








		//string text = "Happy Programmers Day!";
		//
		//for (size_t i = 0; i < text.size(); i++)
		//{
		//	 cout << text[i] << endl;
		//	 cout << text.at(i) << endl;
		//}






	string text = "Happy Programmers Day!";
	//text[0] = 'Y';
	//cout << text << endl;

	//cout << text.front() << endl;
	//text.front() = 'G';
	//cout << text << endl;

	//cout << text.back() << endl;


	//text.insert(text.begin() + 1, 'Z');
	//text.insert(10, "Begin");
	//cout << text << endl;



	//text = "Min Life";
	//text.replace(0,3,"Max");
	//cout << text << endl;

	/*text.append("Hakuna");
	text.append(5, 'I');
	cout << text << endl;



	text.push_back('n');
	cout << text << endl;


	text.pop_back();
	cout << text << endl;*/






	// string text = "Hi ";
	// text.assign("Tural"); // =
	// cout << text << endl;

	 //text = "message";
	 //cout << "Index : " << text.find('x') << endl;
	 //cout << "Index : " << text.rfind('s') << endl;





	 string n = "Vasif";
	 cout << n.c_str() << endl;
	 cout << n.data() << endl;







	 //string num = "123";
	 //
	 //int number = stoi(num);
	 //cout << number << endl;


	 //int number = 123;
	 //string num = to_string(number);
	 //cout << num << endl;
	 //cout << num[0] << endl;




	/* string name = "Eminem";
	 
	 name.erase(2, 4);
	 cout << name << endl;*/




	 /*string name1 = "Leyla";
	 string name2 = "Isa";
	 
	 name1.swap(name2);
	 
	 cout << name1 << endl;
	 cout << name2 << endl;



	 */

	 //string name = "Eminem";
	 //string subString = name.substr(1, 3);
	 //cout << subString << endl;





	 /*string name;
	 cout << "Enter name: ";
	 cin >> name;
	 cout << name << endl;




	 string fullname;
	 cout << "Enter fullname: ";
	 getline(cin, fullname);
	 cout << fullname << endl;*/


}
