#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//void Swape(int* pa, int* pb)
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
//	printf("交换前a=%d，b=%d\n", a, b);
//	Swape(&a, &b);
//	printf("交换后a=%d,b=%d\n", a, b);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//void Reverse(char* ch)
//{
//	size_t len=strlen(ch);
//	char* left = ch;
//	char*right = ch + len - 1;
//	while (left < right)
//	{
//		int tem = 0;
//		tem = *left;
//		*left = *right;
//		*right = tem;
//		left++;
//		right--;
//	}
//
//}
//int main()
//{
//	char ch[10000] = { 0 };
//	while (gets(ch))
//	{
//		Reverse(ch);
//		printf("%s\n", ch);
//	}
//	return 0;
//
//}
//#include<stdio.h>
//#include<string.h>
//void Reverse(char* ch)
//{
//	size_t len = strlen(ch);
//	char* left = ch;
//	char* right = ch + len - 1;
//	while (left < right)
//	{
//		int tmp = 0;
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char ch[10000] = "";
//	while (gets(ch))
//	{
//		Reverse(ch);
//		printf("%s\n", ch);
//	}
//	return 0;
//}
//#include<stdio.h>
//void left_rotate(char* ch,int k)
//{
//	
//}
//int main()
//{
//	char ch = "ABCD";
//	int k = 0;
//	scanf("%d", &k);
//	left_rotate(ch,k);
//	printf("%s\n", ch);
//	return 0;
//
//}
//#include<stdio.h>
//size_t my_strlen(char* ch)
//{
//	char* p = ch;
//	while (*p)
//	{
//		p++;
//	}
//	return p - ch;
//}
//int main()
//{
//	char ch[] = "abcdef";
//	size_t len = my_strlen(ch);
//	printf("%zd", len);
//	return 0;
//}