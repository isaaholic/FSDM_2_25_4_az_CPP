#pragma once


class Student
{
	string _name = "";
	string _surname = "";
	int _age = 0;
	float _score = 0;

public:
	Student() = default;

	Student(string name, string surname, int age, float score)
	{
		_name = name;
		_surname = surname;
		_age = age;
		_score = score;
	}


	string getName() const { return _name; }


	friend ostream& operator<<(ostream& output, const Student& s);
	friend istream& operator>>(istream& input, Student& s);
};



// Without friend

//ostream& operator<<(ostream& output, const Student& s)
//{
//	output << "\nName: " << s.getName() << endl;
//	return output;
//}



ostream& operator<<(ostream& output, const Student& s)
{
	output << "\nName: " << s._name << endl
		<< "Surname: " << s._surname << endl
		<< "Age: " << s._age << endl
		<< "Score: " << s._score << endl;

	return output;
}



istream& operator>>(istream& input, Student& s)
{
	cout << "Name: ";
	getline(input, s._name);

	cout << "Surname: ";
	getline(input, s._surname);

	cout << "Age: ";
	input >> s._age;

	cout << "Score: ";
	input >> s._score;

	cin.ignore();

	return input;
}