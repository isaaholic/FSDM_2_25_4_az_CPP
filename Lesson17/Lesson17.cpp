#include <iostream>

using namespace std;

#define PI 3.14159
#define MAX_AGE 100
#define SQUARE(x) ((x) * (x))

//Şərti Kompilyasiya(Conditional Compilation)

//#define VERSION 2
////
//#if VERSION == 1
//#define MESSAGE "Versiya 1 istifadə olunur."
//#elif VERSION == 2
//#define MESSAGE "Versiya 2 istifadə olunur."
//#else
//#define MESSAGE "Naməlum versiya."
//#endif

//#ifdef və #ifndef direktivləri
// Bu direktivlər istifadə olunan faylların təyin edilib edilmədiyini yoxlamaq üçün istifadə olunur.
// #ifdef direktivi faylın təyin edilib edilmədiyini yoxlayır.
// #ifndef direktivi isə faylın təyin edilmədiyini yoxlayır.

#define DEBUG
////
//#ifdef DEBUG
//#define LOG(x) cout << x << std::endl;
//#else
//#define LOG(x)
//#endif

// #undef direktivi
// Bu direktiv sabitləri və ya makroları silmək üçün istifadə olunur.
// #undef direktivi ilə silinən sabitlər və ya makrolar yenidən təyin edilə bilər.

//#define TEMP 50
//
//#undef TEMP  // TEMP makrosunu ləğv edir
//////
//#define TEMP 100  // Yeni dəyər təyin edirik

#pragma region Get Doctors
void allDoctors();
void allDoctors(void* (filter));
void filterDoctors();
#pragma endregion

#pragma warning(disable : 4996)

int main()
{
	//	#include preprocessor direktivi
	//	Bu direktiv xarici başlıq(header) fayllarını proqramımıza daxil etmək üçün istifadə olunur.
	//	< > istifadə edildikdə sistemin standart başlıq fayllarını axtarır.
	//	" " istifadə edildikdə isə cari layihə qovluğunda fayl axtarılır.
	//	#define direktivi ilə sabitlərin yaradılması
	//	Bu direktiv sabitlər(constant) və makrolar yaratmaq üçün istifadə olunur.

	//Makro nədir ?
	//	Makro C++ dilində preprocessor tərəfindən işlənən bir qaydadır.Makro kompilyasiya zamanı müəyyən bir ifadəni başqa bir ifadə ilə əvəzləmək üçün istifadə olunur.
	//	Makrolar #define direktivi ilə yaradılır və funksiyalara bənzəsə də, onlar funksiyalardan fərqli olaraq kompilyasiya zamanı genişlənir.
	//cout << PI << endl;
	//int age = 102;

	//age > MAX_AGE ? cout << "Sizin yasiniz coxdur." << endl : cout << "Sizin yasiniz normaldir." << endl;

	//cout << SQUARE(5) << endl;
	//Şərti Kompilyasiya(Conditional Compilation)
	//cout << MESSAGE << endl;

	//LOG("Debug rejimi aktivdir.");

	//LOG("Bu mesaj yalnız debug rejimində görünəcək.");

	return 0;
}

// 4 ədəd funksiya
// 1. Decimal to binary
// 2. Binary to decimal
// 3. Hexadecimal to decimal
// 4. Hexadecimal to octal