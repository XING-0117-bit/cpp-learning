#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Add(int a, int b)
{
	return a + b;
}
double Add(double a, double b)
{
	return a + b;
}
int main()
{
	Add(1, 1);
	Add(1.0, 1.0);
	return 0;
}