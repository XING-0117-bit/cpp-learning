#define _CRT_SECURE_NO_WARNINGS 
#include<iostream>
//using namespace std;
//int main()
//{
//	cout << "int:" << sizeof(int) << "byte(s)" << endl;
//	cout << "char:" << sizeof(char) << "byte(s)" << endl;
//	cout << "float:" << sizeof(float) << "byte(s)" << endl;
//	cout << "double:" << sizeof(double) << "byte(s)" << endl;
//	cout << "long long:" << sizeof(long long) << "byte(s)" << endl;
//	return 0;
//}
//using namespace std;
//int main()
//{
//	int x, y;
//	cout << "输入x,y" << endl;
//	cin >> x >> y;
//	cout << x << "+" << y << "=" << x + y << endl;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//namespace myspace
//{
//	int param;
//	const char* getName();
//};
// const char* myspace::getName()
//{
//	return"jack";
//
//}
//const char* getName()
//{
//	return "jerry";
//}
//int main()
//{
//	cout << myspace::getName() << endl; 
//		return 0;
//}
//using namespace std;
//void test(int & j)
//{
//	j++;
//} 
//int main()
//{
//	int i = 10;
//	cout << "before function call:i="  << i << endl;
//	test(i);
//	cout << "after function call:i=" << i << endl;
//	return 0;
//}
//using namespace std;
//struct Student
//{
//	int sno;
//	string sname;
//	bool operator>(struct Student& stu)
//	{
//		return sno > stu.sno;
//	}
//};
//int main()
//{
//	struct Student stu = { 102,"Jerry" };
//	struct Student s = { 101,"Tom" };
//	if (stu > s)
//	{
//		cout << "sno:" << stu.sno << "sname:" << stu.sname << endl; 
//	}else
//	{
//		cout << "sno:" << s.sno << "sname:" << s.sname << endl;
//	}
//	return 0;
//	
//}
//打印二维数组中的所有元素
//#include<stdio.h>
//int main()
//{
//	int arr2[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 5,6,7,8,9 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d", arr2[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//求二维数组的地址
//#include<stdio.h>
//int main()
//{
//	int arr2[3][5] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("arr2[%d][%d]=%p\n", i, j, &arr2[i][j]);
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	 int arr1[n];
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		arr1[i];            //在C99之前 数组的大小只能通过常量或者常量表达式来表示，在C99中引入了用变量来表示数组大小，称为变长数组，但是
//	}                         //vs用到的编译器是msvc并不能支持变长数组，所以需要用clang来完成
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//
//	
//}
//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	char arr1[] = "Welcome to join us!!!!";
//	char arr2[] = "**********************";
//	int left = 0;
//	int right = sizeof(arr1) / sizeof(arr1[0])-2;
//	while (left < right)
//	{
//		
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		
//		right--;
//		left++;
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	char arr1[] = "Welcome to join us";
//	char arr2[] = "******************";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left < right)
//	{
//		arr2[left] = arr1[left];
//			arr2[right] = arr1[right];
//			left++;
//			right--;
//			printf("%s", arr2);
//			Sleep(1000);
//			system("cls");
//	}
//	printf("%s", arr2);
//	return 0;
//}
//二分法：给定一个升序数组，找到特定的下标n
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int flag = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr1[i] == n)
//		{
//			printf("找到了，下标是%d", i);
//			flag = 1;
//			break;
//		}
//		
//	}
//	if (flag == 0)
//	{
//		printf("输入错误\n");
//		return 0;
//	}
//
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr1[] = {1,3,4,5,6,7,8,9};
//	int left = 0;
//	int right = sizeof(arr1) / sizeof(arr1[0]);
//	while (left <= right)
//	{
//		int mid = left+(right+left)/2;//int mid=(left+right)/2;
//		if (arr1[mid] > n)
//		{
//			right = mid-1;
//		}
//		 else if (arr1[mid] < n)
//		{
//			left = mid+1;
//		}
//		 else
//		{
//			printf("%d", mid);
//			break;
//		}
//
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,(3,4),5 };
//    printf("%d\n", sizeof(arr));
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n; j++)
//			{
//				if (i==j || (i + j) == n - 1)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			
//			}
//			printf("\n");
//
//		}
//		
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		int i = 0;
		for (i = 0; i < n; i++)
		{
			int j = 0;
			for (j = 0; j < n; j++)
			{
				if (i ==0||j==0||i==n-1||j==n-1)
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}
			}
			printf("\n");
		}
	}
	return 0;

}