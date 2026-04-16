#pragma once

#define ushort unsigned short

//// inline method - Kompilyator terefinden kodun birbasa yerlesdirilmesini temin edir, kicik olculu kodlarda performans artiri
//// explicit keyword - Konstrukturlarin avtomatik cevrilmesinin qarsini alir
//// Destructor - Class dan yaranmis obyektin omru bitdikde isleyen metoddur, esas burada dinamik melumatlarin (heap) silinmesi prosesini yerine yetiririk
//// Constructor overloading - Constructorun muxtelif sayda parametrle veya muxtelif tipli parametrle islemesine deyilir
//// Dynamic class member variable - Heap de yaranmis memberdir (pointer)
//// Dynamic class - Heap de yaranmis class instance ina deyilir (pointer)
//// Static member - Class daxilinde statik fieldlar veya metodlar yaratmaq olur


//class Car {
//private:
//
//	static size_t _staticId;
//	size_t _id = 0;
//	char* _make = nullptr;
//	char* _model = nullptr;
//	char* _color = nullptr;
//	ushort  _year = 0;
//	double _engine = 0;
//
//public:
//
//	Car();
//	Car(const char* make, const char* model, const char* color);
//	Car(const char* make, const char* model, const char* color, ushort year, double engine);
//
//
//	static size_t getStaticId();
//	size_t getId();
//	const char* getMake();
//	const char* getModel();
//	const char* getColor();
//	ushort getYear();
//	double getEngine();
//
//
//	void setMake(const char* make);
//	void setModel(const char* model);
//	void setColor(const char* color);
//	void setYear(ushort year);
//	void setEngine(double engine);
//
//
//	void print();
//
//	~Car();
//};
//for (auto& item : items) {
//	cout << item << endl;
//}
//class CarGallery {
//private:
//	char* _name = nullptr;
//	Car** _cars = nullptr;
//	size_t _count = 0;
//
//public:
//
//	CarGallery() = default;
//	CarGallery(const char* name)
//	{
//		setName(name);
//	};
//
//
//	CarGallery(const char* name, Car** cars, size_t count)
//	{
//		setName(name);
//		_count = count;
//		_cars = cars;
//	};
//
//
//	const char* getName() { return _name; }
//	Car** getCars() { return _cars; }
//	size_t getCount() { return _count; }
//
//
//
//	void setName(const char* name)
//	{
//		if (name == nullptr)
//			assert(!"name == nullptr");
//
//		if (_name != nullptr)
//			delete[] _name;
//
//
//		size_t len = strlen(name) + 1;
//		_name = new char[len];
//		strcpy_s(_name, len, name);
//	}
//
//
//
//	void print()
//	{
//		cout << "Name: " << (_name ? _name : "null") << endl;
//
//
//		cout << "=======   Cars   =======";
//		for (size_t i = 0; i < _count; i++)
//			_cars[i]->print();
//
//
//		cout << "\n=======   End   =======\n";
//	}
//
//	void clear() {}
//	void appendCar(Car* car) {}
//	void removeCar(Car* car) {}
//	void deleteCarById(size_t id) {}
//	Car* getCarById(size_t id) {}
//
//	~CarGallery()
//	{
//		cout << "\nDestructor -> " << (_name ? _name : "null") << endl;
//
//		delete[] _name;
//
//		for (size_t i = 0; i < _count; i++)
//			delete _cars[i];
//
//		delete[] _cars;
//
//		_name = nullptr;
//		_cars = nullptr;
//	}
//};



class Student {
private:
	static int _staticId;
	int _id;
	char* _name;
	int _age;

public:

	Student() = delete;

	explicit Student(int age);

	explicit Student(const char* name);

	Student(const char* name, int age);

	static int getStaticId() { return _staticId; }

	void setName(const char* name);

	void print();

	~Student();
};







int Student::_staticId = 0;


Student::Student(int age)
{
	_id = ++_staticId;
	_name = nullptr;
	_age = age;
}


Student::Student(const char* name)
{
	_id = ++_staticId;
	_age = 0;

	setName(name);
}


Student::Student(const char* name, int age)
{
	_id = ++_staticId;
	_age = age;

	setName(name);
}


void Student::setName(const char* name)
{
	if (name == nullptr)
		assert(!"name == nullptr");


	if (_name != nullptr)
		delete[] _name;


	size_t len = strlen(name) + 1;
	_name = new char[len];
	strcpy_s(_name, len, name);
}


void Student::print()
{
	cout << "Id: " << _id << endl;
	cout << "Name: " << (_name ? _name : "null") << endl;
	cout << "Age: " << _age << endl;
}


Student::~Student()
{
	cout << "Destructor -> " << (_name ? _name : "null") << endl;

	delete[] _name;
}