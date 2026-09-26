//teat.cpp
#define _CRT_SECURE_NO_WARNINGS
#include"Date.h"
int main()
{
	Date d1(2026, 1, 17);
	Date d2(2026, 3, 25);
	/*cout << (d1 == d2) << endl;
	cout << (d1 > d2) << endl;*/
	Date d3 = d2 + 200;
	d3.Print();
	d2.Print();
	return 0;
}