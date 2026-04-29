#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int* pa = &a;
//	printf("%p", &a);
//	return 0;
////}
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 100;
//	printf("%p\n", &a);
//	printf("%d", a);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("%zd\n", sizeof(int*));
//		printf("%zd\n", sizeof(int*));
//		printf("%zd\n", sizeof(char*));
//		printf("%zd\n", sizeof(long*));
//		printf("%zd\n", sizeof(double*));
//		return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 44445556;
//	char* pa = &a;
//	*pa = 0;
//	printf("%p", &a);//虽然类型不一样但是依然可以存入char类型，因为所占内存大小一样，只不过碍于数据类型，每一次能改变空间里的字节数是不一样的
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char* pi = &a;
//	double* pc = &a;
//	printf("pa=%p\n", pa);
//	printf("pa=%p\n", pa+1);
//	printf("pi=%p\n", pi);
//	printf("pi=%p\n", pi+1);
//	printf("pc=%p\n", pc);
//	printf("pc=%p\n", pc+1);
//	return 0;
//
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