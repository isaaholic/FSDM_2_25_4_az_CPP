#include <iostream>
#include <cassert>
#include <iomanip>

#include "models.h"

using namespace std;

int main()
{
	Debtor* debtor1 = new Debtor("John", "Doe", "123 Work St", "456 Home St", "555-1234", 5000.3532623, false, 1000.1412);
	//debtor1->print();

	Bank bank("My Bank");
	bank.addDebtor(new Debtor("Alice", "Smith", "789 Work Ave", "321 Home Ave", "555-5678", 6000.987654, false, 500.75));
	bank.addDebtor(debtor1);
	//bank.printAllDebtors();
	//bank.printDebtorsDebtGreaterThan(600);
	//bank.printDebtorsWithDelays();
}
