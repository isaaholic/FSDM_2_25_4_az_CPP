#pragma once

Worker* createWorkers(size_t size = 5, size_t maxWorkerSize = 20)
{
	Worker* newWorkers = new Worker[size];
	int* ids = new int[maxWorkerSize] {};
	int count = 0;
	for (size_t i = 0; i < size; i++)
	{
		int index;
		bool isRunning = true;
		while (isRunning)
		{
			index = rand() % maxWorkerSize;
			for (size_t j = 0; j < count; j++)
			{
				if (ids[j] != index)
				{
					ids[count++] = index;
					isRunning = false;
				}
			}
			if (count == 0)
			{
				ids[count++] = index;
				isRunning = false;
			}
		}
		Worker worker = workers[index];
		newWorkers[i] = worker;
	}

	delete[] ids;
	return newWorkers;
}

Company* createCompany(Worker* workers = nullptr, size_t size = 0)
{
	Company* company = new Company();
	company->id = rand();
	company->name = new char[50] {};
	company->address = new char[100] {};
	company->workers = workers;
	company->size = size;

	return company;
}

void salaryGreaterThan(Worker* workers, size_t size, float salary)
{
	for (size_t i = 0; i < size; i++)
	{
		if (workers[i].salary >= salary)
		{
			workers[i].printInfo();
			cout << endl;
		}
	}
}

void ageLessThan(Worker* workers, size_t size, unsigned short age)
{
	for (size_t i = 0; i < size; i++)
	{
		if (workers[i].age <= age)
		{
			workers[i].printInfo();
			cout << endl;
		}
	}
}

void checkNarPhoneNumber(Worker* workers, size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		if (strstr(workers[i].phone, "+99470") == workers[i].phone || strstr(workers[i].phone, "+99477") == workers[i].phone)
		{
			workers[i].printInfo();
			cout << endl;
		}
	}
}