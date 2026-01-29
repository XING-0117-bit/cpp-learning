//#include<stdio.h>
//int main()
//{
//	printf("%c\n", '\130');
//	printf("%c\n", '\x21');
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	 char arr1[] =  "abcdef";
//	char arr2[] = { 'a','b','c','d','e','f'};//调试过程中可以知道字符串的末尾是\0 而在此中字符
//	                                            //末尾并不会有\0这个停止符所以找不到停下来的时候后面就
//												//一直会打印烫烫烫
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char));//数据类型当然长度
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(long double));
//	return 0;
//	
//}
//#include<stdio.h>
//int main()
//{
//	short s = 2;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 1)); //在打印数据结构的长度的时候
//	                                     //是先编译再链接再运行，在编译的时候
//										 //s就已经是2也就是短整型了所以长度就是两个字节所以后来不会再去
//										 //运行后面的等式所以最后的长度也就按照短整型算。
//	return 0;
//
//}