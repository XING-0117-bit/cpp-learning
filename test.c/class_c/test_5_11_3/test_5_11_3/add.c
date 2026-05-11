#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[sz - 1];
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%d ", *p);
//		p--;
//	} 
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char ch[] = "abcdef";
//	size_t sz = strlen(ch);
//	printf("%zd", sz);
//	return 0;
//}
//#include<stdio.h>
//size_t my_strlen(char ch[])
//{
//	char* pa = &ch[0];
//	int count = 0;
//	while (*pa)
//	{
//		count++;
//		pa++;
//	}
//	return count;
//}
//int main()
//{
//	char ch[] = "abcdef";
//	size_t sz = my_strlen(ch);
//	printf("%zd", sz);
//	return 0;
//}
//#include<stdio.h>
//size_t my_strlen(char ch[])
//{
//	char* p = s;
//	while
//}
//int main()
//{
//	char ch[] = "abcdef";
//	size_t r = my_strlen(ch);
//}

//指针和指针之间的比较：
//#include<stdio.h>
//size_t my_strlen(char* s)
//{
//	char* p = s;
//	while (*p)
//	{
//		p++;
//	}
//	return p - s;
//}
//int main()
//{
//	char ch[] = "abcdef";
//	size_t sz = my_strlen(ch);
//	printf("%zd", sz);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	while (p < arr + sz)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}
//#include<stdio.h>
//void Swape(int*pa,int*pb)
//{ 
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("交换前a=%d，b=%d", a, b);
//	Swape(&a, &b);
//	printf("交换后a=%d,b=%d", a, b);
//	return 0;
//}