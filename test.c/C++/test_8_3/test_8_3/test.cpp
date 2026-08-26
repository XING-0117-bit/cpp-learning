#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//int main()
//{
//	cout << "Hello world" << endl;
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("Hello world\n");
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//int rand = 10;
//int main()
//{                // rand报错 因为有一个函数定义为rand
//	printf("%d", rand);
//	return 0;
//}

//#include<stdio.h>
////#include<stdlib.h>
//int rand = 10;
//int main()
//{
//	int rand = 1;
//	/*printf("%d", ::rand);*///打印全局变量
//	printf("%d", rand);  //打印局部变量
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>
namespace XING
{
	int rand = 10;

}
int main()
{
	int rand = 1;
	/*printf("%d", ::rand);*///打印全局变量
	printf("%d", XING::rand);  //打印局部变量
	return 0;
}