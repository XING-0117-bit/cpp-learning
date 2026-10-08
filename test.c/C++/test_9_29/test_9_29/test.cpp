//test.cpp
#define _CRT_SECURE_NO_WARNINGS
#include"Date.h"
using namespace std;
int main()
{
	Date d1(2026, 1, 17);
	Date d2(2026, 3, 25);
	cout<<(d1==d2)<<endl;
	cout << (d1 > d2)<< endl;
	cout << (d1 >= d2)<< endl;
	cout << (d1 <= d2)<< endl;
	cout << (d1 < d2)<< endl;
	Date d3 = d2 + 100;
	Date d4 = d1 - 100;

	int n = d2 - d1;
	d3.Print();
	d4.Print();
	cout << n << endl;
	return 0;
}