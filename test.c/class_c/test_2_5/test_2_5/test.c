#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//#include<stdbool.h>
//int main()
//{
//	_Bool flag = true;
//	if (flag)
//		printf("i like C\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("%zd\n", sizeof(char));
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(short));
//	printf("%zd\n", sizeof(long));
//	printf("%zd\n", sizeof(long long));
//	printf("%zd\n", sizeof(float));
//	printf("%zd\n", sizeof(double));
//	printf("%zd\n", sizeof(long double));
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(a));
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	printf("%zd", sizeof(a + 3));
//	return 0;
//}
#include<stdio.h>
int main()
{
	short a = 2;
	int b = 10;
	printf("%zd\n", sizeof(a = b + 1));
	printf("%d\n", a);
	
	return 0;
}