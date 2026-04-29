#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,3,3,4,5,6,7 };
//	int* p = &arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d",*( p + i));
//	}
//	return 0;
//}
//int my_strlen(char *s)
//{
//	char* p = s;
//	while (*p != 0)
//	{
//		p++;
//	}
//	return p - s;
//}
//#include<stdio.h>
//int main()
//{
//	int sz = my_strlen("abc");
//	printf("%d", sz);
//	return 0;
//}
#include<stdio.h>
#include<string.h>
size_t my_strlen(char* p)
{
	char* pa = p;
	while (*p)
	{
		p++;
	}
	return p - pa;
}
int main()
{
	char ch[] = "abc";
	size_t sz = my_strlen(ch);
	printf("%zd", sz);
	return 0;

}