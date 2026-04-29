//#define _CRT_SECURE_NO_WARNINGS 
////#include<stdio.h>
////int main()
////{
////	int arr[] = { 1,2,3,4,5,1,2,3,4 };
////	int sum = 0;
////	int n = sizeof(arr) / sizeof(arr[0]);
////	for (int i = 0; i < n; i++)
////	{
////		sum^=arr[i];
////	}
////	printf("%d", sum);
////	return 0;
////}
////#include<stdio.h>
////int main()
////{
////	int a = 3;
////	int b = 0;
////	a = a ^ b;
////	b = a ^ b;
////	a = a ^ b;
////	printf("a=%d,b=%d", a, b);
////	return 0;
////}
////#include<stdio.h>
////int main()
////{
////    int n = 0;
////    scanf("%d", &n);
////    int count = 0;
////    if (n & (n - 1) == 1)
////    {
////        count++;
////    }
////    printf("%d", count);
////    return 0;
////}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int m = 0;
//	int count = 0;
//	if(m&n==)
//
//}

#include<stdio.h>
int main()
{
	const int a = 10;
	int* p = &a;
	*p = 100;
	printf("%d", a);
	return 0;
}