#include <iostream>
#include <iomanip>
#include <fstream>


using namespace std;
//
//// rethrow
//// inner exception
//
//int calculate(int* a, int* b) throw(exception)
//{
//	if (a == NULL || b == NULL)
//		throw exception("NullException");
//
//	return *a + *b;
//}
//
//
//int main()
//{
//
//	try
//	{
//		try
//		{
//			cout << calculate(NULL, new int(2)) << endl;
//		}
//		catch (const exception& ex)
//		{
//			cout << "(inner) Exception occured -> " << ex.what() << endl;
//			throw; // Rethrow the exception to be caught by the outer catch block
//		}
//	}
//	catch (const exception& ex)
//	{
//		cout << "(outer) Exception occured -> " << ex.what() << endl;
//	}
//
//
//
//	cout << "Terminated\n";
//	return 0;
//}

//void addNumber(int*& arr, int& size, const int& number) {
//	int* newArr = new int[size + 1];
//
//	for (size_t i = 0; i < size; i++)
//		newArr[i] = arr[i];
//
//	newArr[size++] = number;
//
//	delete[] arr;
//	arr = newArr;
//}
//
//
//int main()
//{
//	/*
//		cout << showpos;
//		cout << noshowpos;
//
//		cout << -5 << endl;
//		cout << 5 << endl;
//	*/
//
//
//
//	/*
//		cout << boolalpha;
//		// cout << noboolalpha;
//
//		cout << true << endl;
//		cout << false << endl;
//	*/
//
//
//
//
//	/*
//	const int size = 3;
//	int arr[size][size]{ 213411, 43532, 543, 4546, 554, 654, 745, 8, 5464569 };
//
//	//cout << left;
//	cout << right;
//
//
//	for (size_t i = 0; i < size; i++)
//	{
//		for (size_t j = 0; j < size; j++)
//			cout << setw(10) << arr[i][j];
//		cout << endl;
//	}
//	*/
//
//
//
//
//
//
//
//	//char* data = new char[20];
//
//	//cout << "Enter data: ";
//	//cin >> data;
//	//cout << "\nData is " << data << endl;
//
//	//cin >> data;
//	//cout << "\nData is " << data << endl;
//
//
//
//
//
//
//
//		//char* data = new char[20]{};
//
//		//cout << "Enter data: ";
//		//cin.getline(data, 20);
//		//cout << "\nData is " << data << endl;
//
//
//
//
//	/*
//		string data;
//
//		cout << "Enter data: ";
//
//		// cin >> data;
//		getline(cin, data);
//
//		cout << "\nData is " << data << endl;
//	*/
//
//
//
//
//
//
//
//	// TASK: Istifadeci istediyi qeder reqem daxil edir, hemin reqemleri array-a yigin.
//	// showpos
//	// setw (left)
//	// dynamic array
//
//
//	cout << showpos << left;
//
//	int number;
//	int size = 0;
//	int* arr = new int[size];
//	cout << "Enter numbers: ";
//
//	// cin.peek() - streamdeki novbeti karakteri streamden silmeden goturu
//
//	//char c = cin.peek();
//
//	//cout << "Novbeti karakter: " << c << endl;
//	//char* c2 = new char[10];
//	//cin >> c2;
//	//cout << c2 << endl;
//
//	char c;
//	do
//	{
//		getchar();
//	} while (cin.peek() != 33);
//
//	/*do
//	{
//		cin >> number;
//		addNumber(arr, size, number);
//
//	} while (cin.peek() != 10);
//
//	for (size_t i = 0; i < size; i++)
//		cout << setw(5) << arr[i];*/
//
//}


#include <string>	//	getline
#include <sstream>	//	stringstream


using namespace std;


int main()
{
	cout << boolalpha;
	// Stream - baytlarin ve simvollarin ardicil axinidir.
	// Standart streamler:
	// cout - console a cixis ucundur
	// cin - console a giris ucundur
	// cerr - error mesaji cixisi ucundur (bufferlenmir)
	// clog - log mesaji cixisi ucundur (bufferlenir)
	// << - insertion operator
	// >> - extraction operator
	// buffer - streamleri birbasa console veya fayla yazmir, evvelceden ayrilmis muveqqeti yaddasdir
	// flush - bufferin mecburi sekilde bosaldilmasidir
	// cout << flush; // bufferi bosaldir
	// cout.flush(); // bufferi bosaldir
	// endl - yeni setire kecir ve bufferi bosaldir
	// '\n' - yeni setire kecir, amma bufferi bosaldirmaz
	// buffered vs unbuffered
	// buffered - permormansi yuksek
	// unbuffered - real-time output ucundur, amma performansi asagidir
	// Streamlerin stateleri:
	// good() - streamin her iki state-de de normal oldugunu gosterir
	// fail() - sehv var
	// bad() - ciddi sehv var
	// eof() - streamin sonuna catildigini gosterir
	//int x;
	//cin >> x; // eger istifadeci reqem evezine character daxil etse bu zaman stream fail olur.

	//if (cin.fail())
	//{
	//	cout << "Error" << endl;
	//}

	//cin.clear(); // streamin state-ni temizleyir
	//cout << cin.good() << endl; // True

	//// cin.ignore() - bufferda qalanlari silir
	//cin.ignore(1000, '\n'); // bufferda qalan 1000 karakteri veya yeni setire qeder silir
	// getline() - streamden setir oxuyur bosluqlari da daxil olmaqla
	// cin.peek() - bufferdan silmeden novbeti karakteri goturur
	// cin.get() - bufferdan silmeden novbeti karakteri goturur, amma char tipinde qaytarir
	// cin.put() - streame 1 eded karakter yazir
	// cin.read() - raw data oxuyur, daha cox binary data ucun uygundur

	// File streamler:
	// ifstream - filedan oxumaq ucundur
	// ofstream - filea yazmaq ucundur
	// fstream - filea yazmaq ve filedan oxumaq ucundur
	//ofstream outFile("output.txt");
	//outFile << "Hello, file!" << endl;
	//// outFile.close(); // filei baglayir
	//// scope bitdikde ofstream in avtmatik olaraq close() metodu cagirilarak file baglanir
	//ifstream inFile("output.txt");
	//string word1;
	//string word2;
	//inFile >> word1; // filedan bir soz oxuyur
	//inFile >> word2; // filedan bir soz oxuyur
	//cout << word1 << endl;
	//cout << word2 << endl;
	// ios::binary - binary formatda yazmaq veya oxumaq ucundur
	//ofstream bFile("binary.bin", ios::binary);
	//int number = 12345;
	//bFile.write(reinterpret_cast<char*>(&number), sizeof(number)); // binary formatda yazir
	// diger ios flagleri:
	// ios::app - filea yazarken evvelki melumatlari silmeden yeni melumatlari elave edir
	// ios::trunc - filea yazarken evvelki melumatlari silir
	// ios::ate - file-in sonuna kecir, amma yazmaya baslamir
	// ios::in - filedan oxumaq ucundur
	// ios::out - filea yazmaq ucundur

	//// stringstream - string uzerinde stream emeliyyati aparmaq ucundur
	// emeliyyatlar ramdeki string uzerinde aparilir, fayl veya console ile elaqesi yoxdur
	//istringstream iss("10 20");
	//int a, b;
	//iss >> a >> b; // stringstream-den iki eded oxuyur
	//cout << typeid(a).name() << " " << a << endl;
	//ostringstream oss;
	//oss << a + b; // stringstream-e eded yazir
	//string result = oss.str(); // stringstream-deki melumati string kimi goturur
	//cout << typeid(result).name() << " " << result << endl;

	// Stream manipulatorlari:
	// endl - new line + flush
	// flush - flush - bufferi bosaldirir
	// ws - streamden bosluqlari silir
	// hex - ededleri hexadecimal formatda gosterir (16-lik format)
	// dec - ededleri decimal formatda gosterir (10-lik format)
	// oct - ededleri octal formatda gosterir (8-lik format)
	//cout << hex << 232 << endl; // e8
	// ios::sync_with_stdio(false); - c ve c++ streamleri sinxron isleye biler, bu da performansi artirir, amma c ve c++ streamlerinin bir-biri ile elaqesini kesir

	// cin.tie(nullptr); - cin ile cout arasindaki avtomati flush elaqesinin kesir ve performansi artirir
	// amma cin ve cout arasinda elaqe olmadigi ucun cout - un bufferi cin - e yazilmaz
	// RAII - Resource Acquisition Is Initialization
	// streamler scope bitende avtomatik olaraq baglanir, bu da resource leak - in qarsini alir
	// nece edir? destructor metodu cagirilaraq streami baglayir

	// C VS C++ STREAMS:
	// printf - cout
	// scanf - cin

	// stremlerin Real internal modeli

	// Application <-> Stream <-> Buffer <-> OS <-> Hardware (device/file/socket)
}


// Homework

//class Applier {
//public:
//
//	string _name = "";
//	int _age = 0;
//	string _speciality = "";
//	string _text = "";
//};
//
//
//class Company {
//	vector<Applier*> appliers;
//
//public:
//	void hireUp(Applier* cv);
//
//	void showAllCV();
//
//
//	void writeToFile(string filename);
//
//
//	void readToFile(string filename);
//};
//
//
//
//
//
//
//int main() {
//	Applier* cv1 = new Applier("Ceyhun", 18, "IT", "Empty1");
//	Applier* cv2 = new Applier("Sebine", 17, "Designer", "Empty2");
//
//
//	Company company;
//	// company.hireUp(cv1);
//	// company.hireUp(cv2);
//	// 
//	// company.writeToFile("company.txt");
//
//
//	company.readToFile("company.txt");
//	company.showAllCV();
//
//}