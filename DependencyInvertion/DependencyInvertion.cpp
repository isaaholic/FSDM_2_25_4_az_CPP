#include <iostream>
#include <vector>

using namespace std;


// Database (CRUD)

// MsSql
// Oracle
// MongoDb


#include "MsSql.h"
#include "Oracle.h"
#include "MongoDb.h"



// SOLID Principles
// Single Responsibility - Each class should have only one reason to change (one responsibility)
// Open Closed - should be open for extension but closed for modification
// Liskov Substitution - Objects of a parent should be replaceable with objects of a child without affecting the correctness of the program
// Interface Segregation - Clients should not be forced to depend on interfaces they do not use
// Dependency Inversion - High-level modules should not depend on low-level modules. Both should depend on abstractions. Abstractions should not depend on details. Details should depend on abstractions.


class DataBaseService {
public:
	virtual void Create() = 0;
	virtual void Read() = 0;
	virtual void Update() = 0;
	virtual void Delete() = 0;
};


class MyOracle : public DataBaseService
{
	Oracle _db;
public:
	void Create() override { _db.Create(); }
	void Read() override { _db.Read(); };
	void Update() override { _db.Modifier(); };
	void Delete() override { _db.Remove(); };
};

class MyMsSql : public DataBaseService
{
	MsSql _db;
public:

	void Create() override { _db.Insert(); }
	void Read() override { _db.Select(); };
	void Update() override { _db.Update(); };
	void Delete() override { _db.Delete(); };
};

class MyMongoDb : public DataBaseService
{
	MongoDb _db;
public:
	void Create() override { _db.InsertOne(); }
	void Read() override { _db.SelectOne(); };
	void Update() override { _db.Edit(); };
	void Delete() override { _db.DeleteOne(); };
};

// Example: MariaDb, PostgresqlDb, SqliteDb, ...




class DaydayDb
{
public:
	void Create() {}
	void Read() {};
	void Update() {};
	void Delete() {};
};




class BabatApp
{
	DataBaseService* _database;
public:
	BabatApp(DataBaseService* database)
	{
		_database = database;
	}

	void doSomething()
	{
		_database->Create();
		_database->Read();
		_database->Update();
		_database->Delete();
	}
};


void main()
{
	DataBaseService* dbService = new MyMongoDb();

	BabatApp app(dbService);
	app.doSomething();
}