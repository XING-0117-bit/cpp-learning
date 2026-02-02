#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//int main()
//{
//	printf("%c\n", 97);
//	printf("%c\n", 'A' + 32);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    printf("%s","abcdef");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    char arr1[] = "abcdef";
//    char arr2[] = { 'a','b','c','d','e','f' };
//    printf("%s\n", arr1);
//    printf("%s\n", arr2);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    printf("Hello c\n");
//    printf("Hello world\n");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("Hello c ");
//	printf("Hello world");
//	return 0;
//}
#include<stdio.h>
int is_prime(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}
int main()
{
    int n = 0;
    for (n + 1; n <= 100; n++)

        if (is_prime(n) == 1)

            printf("%d ", n);

    return 0;
}