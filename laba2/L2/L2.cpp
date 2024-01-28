//ShmanaiViktoria2006
//cp1251 / 53 68 6D 61 6E 61 69 56 69 6B 74 6F 72 69 61 32 30 30 36
//utf-8 /  53 68 6D 61 6E 61 69 56 69 6B 74 6F 72 69 61 32 30 30 36
//utf-16 / 0053 0068 006D 0061 006E 0061 0069 0056 0069 006B 0074 006F 0072 0069 0061 0032 0030 0030 0036

//ШманайВиктория2006
//cp1251 / D8 EC E0 ED E0 E9 C2 E8 EA F2 EE F0 E8 FF 32 30 30 36
//utf-8 /  0428 043C 0430 043D 0430 0439 0412 0438 043A 0442 043E 0440 0438 044F 32 30 30 36
//utf-16 / 0428 043C 0430 043D 0430 0439 0412 0438 043A 0442 043E 0440 0438 044F 32 30 30 36

//Шманай2006Viktoria
//cp1251 / D8 EC E0 ED E0 E9 32 30 30 36 56 69 6B 74 6F 72 69 61
//utf-8 /  0428 043C 0430 043D 0430 0439 0032 0030 0030 0036 0056 0069 006B 0074 006F 0072 0069 0061
//utf-16 / 0428 043C 0430 043D 0430 0439 0032 0030 0030 0036 0056 0069 006B 0074 006F 0072 0069 0061


#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int number = 0x12345678;
	char hello[] = "Hello, ";
&	char lfie[] = "ShmanaiViktoria2006";
	char rfie[] = "ШманайВиктория2006";
	char lr[] = "Шманай2006Viktoria";

	wchar_t Lfie[] = L"ShmanaiViktoria2006";
	wchar_t Rfie[] = L"ШманайВиктория2006";
	wchar_t LR[] = L"Шманай2006Viktoria";

	cout << hello << lfie << endl;
	return 0;
}