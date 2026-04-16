#pragma once

class Debtor {
private:
	size_t _id;
	char* _name;
	char* _surname;
	char* _workAddress;
	char* _liveAddress;
	char* _phoneNumber;
	double _salary;
	bool _hasLatePayment;
	double _debt;
	static size_t _staticId;

public:
	// Constructor
	Debtor();
	Debtor(const char* name, const char* surname, const char* workAddress, const char* liveAddress, const char* phoneNumber, double salary, bool hasLatePayment, double debt);
	Debtor(const Debtor& other);
	Debtor(Debtor&& other);
	~Debtor();

	Debtor& operator=(const Debtor& other) {
		if (this != &other) {
			setName(other.getName());
			setSurname(other.getSurname());
			setWorkAddress(other.getWorkAddress());
			setLiveAddress(other.getLiveAddress());
			setPhoneNumber(other.getPhoneNumber());
			setSalary(other.getSalary());
			setHasLatePayment(other.getHasLatePayment());
			setDebt(other.getDebt());
		}
		return *this;
	}

	Debtor& operator=(Debtor&& other) noexcept {
		std::cout << "Move Assignment Operator called" << std::endl;
		if (this != &other) {
			this->_id = other._id;
			setName(other.getName());
			setSurname(other.getSurname());
			setWorkAddress(other.getWorkAddress());
			setLiveAddress(other.getLiveAddress());
			setPhoneNumber(other.getPhoneNumber());
			setSalary(other.getSalary());
			setHasLatePayment(other.getHasLatePayment());
			setDebt(other.getDebt());
			other._name = nullptr;
			other._surname = (nullptr);
			other._workAddress = (nullptr);
		}
		return *this;
	}

	// Accessors
	void setName(const char* name);
	void setSurname(const char* surname);
	void setWorkAddress(const char* workAddress);
	void setLiveAddress(const char* liveAddress);
	void setPhoneNumber(const char* phoneNumber);
	void setSalary(double salary);
	void setHasLatePayment(bool hasLatePayment);
	void setDebt(double debt);
	char* getName() const;
	char* getSurname() const;
	char* getWorkAddress() const;
	char* getLiveAddress() const;
	char* getPhoneNumber() const;
	double getSalary() const;
	bool getHasLatePayment() const;
	double getDebt() const;
	size_t getId() const;
	size_t getStaticId() const;

	void print();
};

size_t Debtor::_staticId = 0;

Debtor::Debtor() {
	_id = ++_staticId;
	_name = nullptr;
	_surname = nullptr;
	_workAddress = nullptr;
	_liveAddress = nullptr;
	_phoneNumber = nullptr;
	_salary = 0;
	_hasLatePayment = false;
	_debt = 0;
}

Debtor::Debtor(const char* name, const char* surname, const char* workAddress, const char* liveAddress, const char* phoneNumber, double salary, bool hasLatePayment, double debt) :Debtor()
{
	setName(name);
	setSurname(surname);
	setWorkAddress(workAddress);
	setLiveAddress(liveAddress);
	setPhoneNumber(phoneNumber);
	setSalary(salary);
	setHasLatePayment(hasLatePayment);
	setDebt(debt);
}

Debtor::Debtor(const Debtor& other) 
	: Debtor(other.getName(), 
		other.getSurname(), 
		other.getWorkAddress(), 
		other.getLiveAddress(), 
		other.getPhoneNumber(), other.getSalary(), other.getHasLatePayment(), other.getDebt()) {
}

Debtor::Debtor(Debtor&& other)
{
	std::cout << "Move Constructor called" << std::endl;
	_id = other._id;
	_name = other._name;
	_surname = other._surname;
	_workAddress = other._workAddress;
	_liveAddress = other._liveAddress;
	_phoneNumber = other._phoneNumber;
	_salary = other._salary;
	_hasLatePayment = other._hasLatePayment;
	_debt = other._debt;
	other._name = nullptr;
	other._surname = nullptr;
	other._workAddress = nullptr;
	other._liveAddress = nullptr;
	other._phoneNumber = nullptr;
}

Debtor::~Debtor() {
	delete[] _name;
	delete[] _surname;
	delete[] _workAddress;
	delete[] _liveAddress;
	delete[] _phoneNumber;
}

void Debtor::setName(const char* name) {
	if (name == nullptr)
		assert(!"name == nullptr");

	if (this->_name != nullptr)
		delete[] this->_name;

	size_t len = strlen(name) + 1;
	this->_name = new char[len];
	strcpy_s(this->_name, len, name);
}

void Debtor::setSurname(const char* surname) {
	if (surname == nullptr)
		assert(!"surname == nullptr");

	if (this->_surname != nullptr)
		delete[] this->_surname;

	size_t len = strlen(surname) + 1;
	this->_surname = new char[len];
	strcpy_s(this->_surname, len, surname);
}

void Debtor::setWorkAddress(const char* workAddress) {
	if (workAddress == nullptr)
		assert(!"workAddress == nullptr");

	if (this->_workAddress != nullptr)
		delete[] this->_workAddress;

	size_t len = strlen(workAddress) + 1;
	this->_workAddress = new char[len];
	strcpy_s(this->_workAddress, len, workAddress);
}

void Debtor::setLiveAddress(const char* liveAddress) {
	if (liveAddress == nullptr)
		assert(!"liveAddress == nullptr");

	if (this->_liveAddress != nullptr)
		delete[] this->_liveAddress;

	size_t len = strlen(liveAddress) + 1;
	this->_liveAddress = new char[len];
	strcpy_s(this->_liveAddress, len, liveAddress);
}

void Debtor::setPhoneNumber(const char* phoneNumber) {
	if (phoneNumber == nullptr)
		assert(!"phoneNumber == nullptr");

	if (this->_phoneNumber != nullptr)
		delete[] this->_phoneNumber;

	size_t len = strlen(phoneNumber) + 1;
	this->_phoneNumber = new char[len];
	strcpy_s(this->_phoneNumber, len, phoneNumber);
}

void Debtor::setSalary(double salary) {
	if (salary < 0)
		assert(!"salary < 0");
	this->_salary = salary;
}

void Debtor::setHasLatePayment(bool hasLatePayment) {
	this->_hasLatePayment = hasLatePayment;
}

void Debtor::setDebt(double debt) {
	if (debt < 0)
		_debt = 0;
	this->_debt = debt;
}

char* Debtor::getName() const {
	return _name;
}

char* Debtor::getSurname() const {
	return _surname;
}

char* Debtor::getWorkAddress() const {
	return _workAddress;
}

char* Debtor::getLiveAddress() const {
	return _liveAddress;
}

char* Debtor::getPhoneNumber() const {
	return _phoneNumber;
}

double Debtor::getSalary() const {
	return _salary;
}

bool Debtor::getHasLatePayment() const {
	return _hasLatePayment;
}

double Debtor::getDebt() const {
	return _debt;
}

size_t Debtor::getId() const {
	return _id;
}

size_t Debtor::getStaticId() const {
	return _staticId;
}

void Debtor::print() {
	std::cout << "ID: " << _id << std::endl;
	std::cout << "Name: " << _name << std::endl;
	std::cout << "Surname: " << _surname << std::endl;
	std::cout << "Work Address: " << _workAddress << std::endl;
	std::cout << "Live Address: " << _liveAddress << std::endl;
	std::cout << "Phone Number: " << _phoneNumber << std::endl;

	// Print salary with 2 decimal places
	std::cout << std::fixed << std::setprecision(2);
	std::cout << "Salary: " << _salary << std::endl;

	std::cout << "Has Late Payment: " << (_hasLatePayment ? "Yes" : "No") << std::endl;

	// Print debt as is (full precision)
	std::cout << "Debt: " << _debt << std::endl;
}

class Bank {
private:
	char* _name;
	Debtor** _debtors;
	size_t _count;

public:
	Bank() = delete;
	Bank(const char* name);
	~Bank();

	void addDebtor(Debtor* debtor);

	void setName(const char* name);
	void printAllDebtors();
	void printDebtorsDebtGreaterThan(double debt);
	void printDebtorsWithDelays();
};

Bank::Bank(const char* name) {
	setName(name);
	_debtors = nullptr;
	_count = 0;
}

Bank::~Bank() {
	delete[] _name;
	for (size_t i = 0; i < _count; ++i) {
		delete _debtors[i];
	}
	delete[] _debtors;
}

void Bank::setName(const char* name) {
	if (name == nullptr)
		assert(!"name == nullptr");

	if (this->_name != nullptr)
		delete[] this->_name;

	size_t len = strlen(name) + 1;
	this->_name = new char[len];
	strcpy_s(this->_name, len, name);
}

void Bank::addDebtor(Debtor* debtor) {
	Debtor** temp = new Debtor * [_count + 1];

	for (size_t i = 0; i < _count; ++i) {
		temp[i] = _debtors[i];
	}

	temp[_count++] = debtor;
	delete[] _debtors;
	_debtors = temp;
}

void Bank::printAllDebtors()
{
	std::cout << "Bank: " << _name << std::endl;
	for (size_t i = 0; i < _count; ++i) {
		_debtors[i]->print();
		std::cout << std::endl;
	}
}

void Bank::printDebtorsDebtGreaterThan(double debt)
{
	std::cout << "Bank: " << _name << std::endl;
	for (size_t i = 0; i < this->_count; i++)
	{
		if (this->_debtors[i]->getDebt() >= debt)
		{
			this->_debtors[i]->print();
			std::cout << std::endl;
		}
	}
}

void Bank::printDebtorsWithDelays()
{
	std::cout << "Bank: " << _name << std::endl;
	for (size_t i = 0; i < this->_count; i++)
	{
		if (this->_debtors[i]->getHasLatePayment())
		{
			this->_debtors[i]->print();
			std::cout << std::endl;
		}
	}
}