#pragma once


template<typename T>
T maximum(T value1, bool value2) {
	cout << "template\n";
	return (value1 > value2) ? value1 : value2;
}
//
//char maximum(char value1, char value2) {
//	cout << "common\n";
//	return (value1 > value2) ? value2 : value1;
//}



void mainFunction() {
	cout << maximum(1, 5) << endl;
	cout << maximum<int>(1, 5) << endl;

	cout << maximum('A', 'B') << endl;

	// cout << maximum<float>(2.3f, 6.4F) << endl;
}