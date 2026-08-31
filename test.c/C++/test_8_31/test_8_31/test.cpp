#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//int main()
//{
//	 const int a = 10;
//	const int& b = a;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int b = 10;
//	const int& a = b;
//	a++;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	 const int a = 10;
//	const int& b = a;
//	int c = a;
//	return 0;
//}
#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	double b = a;
	const double& c = a;
	return 0;
}