#pragma once

class MongoDb
{
public:
	void InsertOne() {
		cout << "MongoDb: InsertOne" << endl;
	}
	void SelectOne() {
		cout << "MongoDb: SelectOne" << endl;
	}
	void Edit() {
		cout << "MongoDb: Edit" << endl;
	}
	void DeleteOne() {
		cout << "MongoDb: DeleteOne" << endl;
	}
};