#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int Fac(int n)
{
	if (n == 0)
		return 1;
	else
		return n * Fac(n - 1);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int r = Fac(n);
	printf("%d", r);
}