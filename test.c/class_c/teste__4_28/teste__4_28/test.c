#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[0];
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d", *p);
//		p = p + 1;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//
//{
//	int a = 10;
//	int* p = &a;
//	char* pa = &a;
//	printf("%d\n", *p);
//	printf("%d\n", *pa);//对于指针来说 所占字节大小是不由类型决定的而是由环境决定，所以char和int所占空间大小一样，但是可以看到当把int类型的地址放到char类型中去时还是有一个警告，所以我们用void来解决这种问题
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	void* pa = &a;   //但是void只能用来接受却无法进行准确的计算
//	*pa = 100;
//	printf("%d\n", *pa);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* pa = &arr[0];
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d", *pa);
//		pa++;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* pa = &arr[sz-1];
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d", *pa);
//		pa--;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* pa = &arr[0];
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d", *(pa + i));
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* pa = &arr[0];
//	printf("%d", &arr[sz - 1] - &arr[0]);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//size_t my_strlen(char* p)
//{
//	char* s = p;
//	while (*p)
//	{
//		p++;
//	}
//	return p - s;
//}
//int main()
//{
//	char ch[] = "abc";
//	size_t sz = my_strlen(ch);
//	printf("%zd", sz);
//	return 0;
//
//}
//#include<stdio.h>
//#include<string.h>
//size_t my_strlen(char* p)
//{
//	char* pa = p;
//	while (p)
//	{
//		p++;
//	}
//	return p - pa;
//}
//int main()
//{
//	char ch[] = "abc";
//	size_t sz = my_strlen(ch);
//	printf("%zd", sz);
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	const int* p = &a;
//	*p = 100;//加上const就无法再通过解引用符来改变a的大小
//	printf("%d", *p);
//	return 0;
//}
#include<stdio.h>
int main()
{
	const int a = 10;
	 int*const p = &a;
	 *p = 1000;
	printf("%d", a);
	return 0;
}