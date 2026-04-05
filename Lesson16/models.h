#pragma once

struct Worker {
	size_t id = 0;
	char* name = nullptr;
	char* surname = nullptr;
	unsigned short age = 0;
	char* address = nullptr;
	char* phone = nullptr;
	float salary = 0;

	void printInfo() const
	{
		cout << "ID: " << id << endl;
		cout << "Name: " << name << endl;
		cout << "Surname: " << surname << endl;
		cout << "Age: " << age << endl;
		cout << "Address: " << address << endl;
		cout << "Phone: " << phone << endl;
		cout << "Salary: $" << salary << endl;
	}
};


struct Company {
	size_t id = 0;
	char* name = nullptr;
	char* address = nullptr;
	Worker* workers = nullptr;
	size_t size = 0;

	void addWorker(const Worker& worker)
	{
		Worker* newWorkers = new Worker[size + 1];
		for (size_t i = 0; i < size; i++)
		{
			newWorkers[i] = workers[i];
		}
		newWorkers[size] = worker;
		delete[] workers;
		workers = newWorkers;
		size++;
	}

	void printInfo() const
	{
		cout << "Company ID: " << id << endl;
		cout << "Company Name: " << name << endl;
		cout << "Company Address: " << address << endl;
		cout << "Workers:" << endl;
		for (size_t i = 0; i < size; i++)
		{
			cout << "Worker " << (i + 1) << ":" << endl;
			workers[i].printInfo();
			cout << endl;
		}
	}
};