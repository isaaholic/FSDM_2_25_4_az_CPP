#include <iostream>
#include <stdio.h>

using namespace std;

// input-- > giriş
// output-- > çıxış
// FILE-- > fayl-- > (stream)


//== = Modes == =
//
//b-- > binary
//
//1) write-- > yazmaq-- > "w"  -- > "wb"  -- > "w+"  -- > "wb+"
//2) read-- > oxumaq-- > "r"  -- > "rb"  -- > "r+"  -- > "rb+"
//3) append-- > əlavə etmək-- > "a"  -- > "ab"  -- > "a+"  -- > "ab+"

//	fopen_s-- > faylı açmaq
//	fclose-- > faylı bağlamaq

// putc-- > qoymaq, (yazmaq)
// getc-- > almaq, (oxumaq)

//putchar(int) -- > ASCII-- > Misal: 65 == 'A'

// EOF-- > End of File

//feof(file) -- > faylın sonun catdi

// Buffer-- > Bufer(yaddaş sahəsi)

// fputs-- > toplu yazmaq
// fgets-- > toplu oxumaq(aşkar, \n, son) (məlumatı buffer - ə köçürmək)

// fwrite-- > toplu yazmaq
// fread_s-- > toplu oxumaq
// fread-- > toplu oxumaq

//	int fseek(FILE* stream, long int offset, int whence); --> (kursorun yerini dəyişmək)

//Return Value : Bu funksiya müvəffəqiyyətli olarsa sıfırı qaytarır və ya sıfırdan fərqli bir dəyər qaytarır.

// offset-- > nə qədər sürüşdürmək(Bu, haradan ofset ediləcək baytların sayıdır.)

// whence-- > (haradan)-Bu, ofsetin əlavə olunduğu mövqedir.Aşağıdakı sabitlərdən biri ilə müəyyən edilir.
//
// 1) SEEK_SET-- > #define 0 (Faylın başlanğıcı)
// 2) SEEK_CUR-- > #define 1 (Fayl göstəricisinin cari mövqeyi)
// 3) SEEK_END-- > #define 2 (Faylın sonu)

// ftell(FILE* stream) funksiyası fayl göstəricisinin cari vəziyyətini qaytarır.

// rewind(FILE* stream) funksiyası fayl mövqeyinin göstəricisini verilmiş fayl axınının başlanğıcına təyin edir.



int main()
{
	//// Modes: write(w),  read(r),  append(a),  (w+),  (r+),  (a+)
	//// Modes: write(wb), read(rb), append(ab), (wb+), (rb+), (ab+)
	//// EOF == -1



	FILE* file;

	//fopen_s(&file, "C:\\Users\\mamedly_i\\Desktop\\myfile.txt", "w");
	//fopen_s(&file, R"(C:\Users\mamedly_i\Desktop\nurlan.txt)", "w");
	//fopen_s(&file, "yusuf.txt", "a");
	//// 
	//char name[7] = { "Medine" };

	//if (file != nullptr)
	//{
	//	for (auto& c : name)
	//	{
	//		if (c != '\0')
	//			putc(c, file);
	//	}
	//	cin.get();

	//	fclose(file);
	//}

	//fclose(file);


	/*fopen_s(&file, "yusuf.txt", "r");

	if (file)
	{
		char symbol = getc(file);

		while (symbol != EOF)
		{
			cout << symbol;
			symbol = getc(file);
		}

		fclose(file);
	}*/




	//// TASK
	// // Name: Tural
	// // Surname: Novruzov
	// 
	// 
	// 
	// Isa Mammadli
	// Huseyn Mammadov
	// Program basladiqda fayldaki adlari oxuyub 
	// yuxaridaki numunedeki kimi cixmalidir
	// Sonra ise yeni ad ve soyadi sorusmalidir ve fayla yazmalidir.




	/*fopen_s(&file, "task1.txt", "a+");

	if (file)
	{
		char symbol = getc(file);
		while (symbol != EOF)
		{
			if (symbol == '\n')
			{
				cout << symbol;
				symbol = getc(file);
				continue;
			}
			cout << "~~~~~~~~~~~~~~~~~~"<<endl;
			cout << "Name: ";
			while (symbol != ' ')
			{
				cout << symbol;
				symbol = getc(file);
			}
			cout << "\nSurname: ";
			symbol = getc(file);
			while (symbol != '\n')
			{
				cout << symbol;
				symbol = getc(file);
			}
		}
		cout << "~~~~~~~~~~~~~~~~~~" << endl;
		int size = 30;
		char* name = new char[size];
		char* surname = new char[size];

		cout << "Enter name: ";
		cin.getline(name, size);

		cout << "Enter surname: ";
		cin.getline(surname, size);

		for (size_t i = 0; name[i] != '\0'; i++)
			putc(name[i], file);

		putc(' ', file);

		for (size_t i = 0; surname[i] != '\0'; i++)
			putc(surname[i], file);

		putc('\n', file);

		fclose(file);
		delete[] name;
		delete[] surname;
	}*/







	//fopen_s(&file, "task1.txt", "a");

	//if (file) {
	//	const char* name = "Hakuna";
	//	const char* surname = "Matata";

	//	fputs(name, file);
	//	fputc(' ', file);
	//	fputs(surname, file);
	//	fputc('\n', file);

	//	fclose(file);
	//}

	/*fopen_s(&file, "task1.txt", "r");

	if (file) {
		int size = 1024;
		char* buffer = new char[size];

		while (fgets(buffer, size, file))
			cout << buffer;

		fclose(file);
		delete[] buffer;
	}*/





	// .bin File Stream

	FILE* stream;
	fopen_s(&stream, "array.bin", "wb");

	if (stream)
	{
		const int size = 5;
		int arr[size] = { 10, 20, 30, 40, 50 };

		fwrite(arr, sizeof(int), size, stream);
		fclose(stream);
		stream = nullptr;
	}





	fopen_s(&stream, "array.bin", "rb");

	if (stream)
	{
		const int size = 5;
		int arr[size] = {};

		fread(arr, sizeof(int), size, stream);
		fclose(stream);
		stream = nullptr;

		for (size_t i = 0; i < size; i++)
			cout << arr[i] << ' ';
	}

}