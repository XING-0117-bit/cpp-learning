#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<list>
#include<string>
using namespace std;
//void test_string1()
//{
//	string s1;
//	string s2("Hello world");
//	string s3(s2);
//	string s4 = s2;
//	string s5("C++入门");
//}
//void test_string2()
//{
//	string s1("Hello world***********");//创建字符串
//	string s2(s1, 6, 3); //从下标为6的字符开始，留下三个字符
//	string s3(s1, 6, s1.size() - 6); //从下标为6的字符开始，一直到结束
//	string s4(s1, 6, 10000);//超出整个字符串的长度也不会报错，会一直到最后一个字符
//	string s5(s1, 6);    //即使不写第三个参数也是有默认值的，还是从下标为6的字符开始一直到结束
//	string s7("Hello world***********",7);//从开头取n个字符
//	string s8(10, '*'); //构造长度为10的由'*'组成的字符串
//	cout << s2 << endl;
//	cout << s3 << endl;
//	cout << s4 << endl;
//	cout << s5 << endl;
//	cout << s7 << endl;
//	cout << s8 << endl;
//}
//void test_string3()
//{
//	string s1 = "Hello world*********";
//	string s2 = s1;//赋值拷贝
//	string s3;
//	s3 = "hello";  //接收字符数组
//	string s4;
//	s4 = 'x';  //单字符赋值
//}
//void test_string4()
//{
//	string s1 = "12345";
//	s1[0]++;          //将下标为0的字符加1
//	s1[2] = '4';     //将下标为2的字符替换成'4'
//	cout << s1 << endl;
//	//cout << s1[20] << endl;  //越界报错
//
//	 s1 += "******";     //给字符串在加上一串字符
//	 cout << s1 << endl;
//
//	char arr[] = "12345";
//	arr[0]++;                 //用数组来实现以上操作
//	cout << arr[0] << endl;
//	//cout << arr[20] << endl;  //越界不报错
//}
//void test_string5()
//{
//	string s1 = "12345";
//	for (int i = 0; i < s1.size(); i++)
//	{
//		s1[i]++;                    //遍历数组并且加1
//	}
//	cout << s1 << endl;
//	//用迭代器遍历
//	string::iterator it=s1.begin();
//	while(it!=s1.end())
//	{
//		cout << *it <<'%';
//		it++;
//	}
//	cout << endl;
//	
//	//用auto遍历
//	for (auto ch : s1)
//	{
//		cout << ch << '@';
//	}
//	cout << endl;
//	for (int i = 0; i < s1.size(); i++)
//	{
//		s1[i]++;                    //当然也可以在遍历的时候在每个字符中间加空格隔开
//		cout << s1[i] << " " ;
//	}
//	
//}
//void test_string6()
//{
//	string s1 = "12345";
//	cout << s1.max_size() << endl;
//	cout<<s1.size()<<endl;      
//	cout<<s1.capacity()<<endl;    //用来计算开辟空间的个数
//	s1 += "*******************"; 
//	cout << s1.size() << endl;
//	cout << s1.capacity() << endl;  //空间不够会扩容
//}
//void test_string7()
//{
//	string s1 = "12345";
//	cout<<s1.size()<<endl;
//	cout<<s1.length()<<endl;
//}
//int main()
//{
//	//auto x1 = 0.1;
//
//	//auto p1 = x1;  //单用auto和auto*是没有任何区别的
//	//auto p2 = &x1;
//	//auto* p3 = &x1;   //但是如果指定了写出auto*那就代表是一个指针必须加上取地址&
//	//cout << p1 << " " << p2 << " " << p3 << endl;
//
//	//auto x1 = 0.1, x2 = 0.2;  //必须保持变量的类型是一致的
//	//auto x3 = 1, x4 = 0.7;    //类型不一致就会报错
//	//auto arr[] = { 1,2,3,4,5 };
//
//	return 0;
//}
//class Solution {
//public:
//    bool IsLetters(char ch)
//    {
//        if (ch >= 'a' && ch <= 'z')
//            return true;
//        if (ch >= 'A' && ch <= 'Z')
//            return true;
//        return false;
//    }
//    string reverseOnlyLetters(string s) {
//        int left = 0;
//        int right = s.size() - 1;
//        while (left < right)
//        {
//            while (left < right && !IsLetters(s[left]))
//                left++;
//            while (left <= right && !IsLetters(s[right]))
//                right--;
//            swap(s[left], s[right]);
//            left++;
//            right--;
//        }
//    }
//};
//class Solution {
//public:
//    int firstUniqChar(string s) {
//        int count[26] = { 0 };   //统计每个字母出现的次数
//        for (size_t i = 0; i < s.size(); i++)
//        {
//            count[s[i] - 'a']++;    //字母每出现一次就加一
//        }
//
//        for (size_t i = 0; i < s.size(); i++)
//        {
//            if (count[s[i] - 'a'] == 1)   //最后统计，如果只字母只出现一次那就返回该字母下标
//            {
//                return i;
//            }
//        }
//        return -1;   //如果每一个字母都出现多次那就返回-1
//    }
//};
//void test_string8()
//{
//	string s1 = "12345";
//	string s2 = "12345";
//	string::iterator it = s1.begin(); 
//	while (it != s1.end())
//	{
//		(*it)++;
//		cout << *it << "%";
//		*it++;
//	}
//	cout << endl;
//
//	string::const_iterator it1 = s2.begin(); //加了const版本
//	while (it1 != s2.end())
//	{
//		//(*it)++;     //加了const版本所以数值不能被更改，如果不注释就会报错
//		cout << *it1 << "@";
//		*it1++;
//	}
//}


//void test_string9()
//{
//	int array[] = { 1,2,3,4,5 };
//	int array2[] = { 1,2,3,4,5 };
//	for (auto& e : array)
//	{
//		e *= 2;                     //需要改变数值就这么用
//		cout << e;
//	}
//	cout << endl;
//	for (const auto& e1 : array2)
//	{
//		cout << e1;                  //不能改变数值就加上const
//	}
//}
//void test_string10()
//{
//	string s1 = "12345";
//	string s2 = "12345";
//	string::reverse_iterator it = s1.rbegin();
//	while (it != s1.rend())
//	{
//		(*it)++;
//		cout << *it << "%";
//		*it++;
//	}
//	cout << endl;
//
//	string::const_reverse_iterator it1 = s2.rbegin(); //加了const版本
//	while (it1 != s2.rend())
//	{
//		//(*it)++;     //加了const版本所以数值不能被更改，如果不注释就会报错
//		cout << *it1 << "@";
//		*it1++;
//	}
//}
//void test_string11()
//{
//	string s1 = "12345";    //字符串反转可以完成
//	reverse(s1.begin(), s1.end());
//	cout << s1 << endl;
//
//	list <int> It = { 1,2,3,4,5 };  //链表反转
//	reverse(It.begin(), It.end());
//	for (auto val : It)
//	{
//		cout << val ;
//	}
//}
//void test_string12()
//{
//	string s1 = "hello";
//	s1.push_back (' ');  //插入一个字符
//	s1.push_back ('w');
//	s1.push_back ('o');
//	cout << s1 << endl;
//
//	s1.append("rld");  //插入字符串
//	s1.append(s1, 1, 3);  //从下标为1开始截取三个字符插入
//	cout << s1 << endl;
//	char ch[] = "!!!";
//	s1.append(ch);  //插入一个C风格的字符串
//	cout << s1 << endl;
//	s1.append(ch, 2);  //在C风格的字符串中只取两个插入
//	cout << s1 << endl;
//	s1.append(5, 'x'); //插入五个'x'字符
//	cout << s1 << endl;
//}
//void test_string13()
//{
//	string s1 = "hello";
//	s1 += "******";   //加一串字符
//	cout << s1 << endl;
//	char ch[] = "!!!";
//	s1 += ch;   //加	C语言风格的字符串
//	cout << s1 << endl;
//	s1 += 'w';  //加一个字符
//	cout << s1 << endl;
//}
//void test_string14()
//{
//	string s1 = "hello";
//	s1.insert(5, " world");  //在下标为5的位置插入字符串
//	cout << s1 << endl;
//	s1.insert(5, "!!!!!!!", 0, 3);  //在下标为5的位置插入一段内容来自指定字符串，
//	cout << s1 << endl;                              // 字符串长度为从下标为0开始往后三个字符
//	char ch[] = "****";
//	s1.insert(7, string(ch));  //在下标为7的位置插入C语言风格的字符串
//	cout << s1 << endl;
//	s1.insert(0, ch, 2); //在开头插入指定字符串中的内容，大小为从开头取两个
//	cout << s1 << endl;
//	s1.insert(2, 3, '#'); //在下标为2的位置之前插入3个字符
//	cout << s1 << endl;
//
//	auto it = s1.begin() + 5;  //迭代器中的用法，在下标为5的位置插入字符
//		s1.insert(it, '-');
//		cout << s1 << endl;
//
//		string s2 = "&&&&&&&";
//		s2.insert(s2.begin(), s1.begin() + 5,s1.begin()+7);//把 s1 的 [5, 7) 即 "-h" 插到 s2 下标 0前
//		cout << s2 << endl;
//}
//void test_string15()
//{
//	string s1 = "hello";
//	string s2 = "hello";
//	string s3 = "hello";
//	s1.erase(0, 4);  //清楚从下标为0的位置开始到下标为4的位置的字符
//	cout << s1 << endl;
//	auto it = s2.begin()+1;  //迭代器，删掉下标为1的字符
//	s2.erase(it);
//	cout << s2 << endl;
//
//	s3.erase(s3.begin(), s3.end()-1);  //删除最后一个字符之前的所有字符
//	cout << s3<<endl;
//}
//void test_string16()
//{
//	string s1 = "hello";
//	s1.replace(1, 3, "!!!");  //从下标为1的字符开始替代三个字符为指定字符，当然这种同个数替换对于效率是没有影响的
//	cout << s1 << endl;
//	s1.replace(0, 5, "88");//如果是不同个数替换其实很费空间
//	cout << s1 << endl;
//	string s2 = "I like apples";
//	string s3 = "oranges and bananas";
//	s2.replace(7, 6, s3, 0, 7);  //将s2中从下标为7开始的六个字符替换为s3中下标为0开始的7个字符
//	cout << s2<< endl;
//	s2.replace(7, 7, "C++");  //s2从下标为7开始的七个字符替换为C++
//	cout << s2 << endl;
//	s3.replace(0, 7, "apples", 6);  //s3从下标为0的字符开始的七个字符替换为指定字符串中的六个字符
//	cout << s3 << endl;
//	s3.replace(0, 7, 7, '*');  //s3从下标为0的字符开始的七个字符替换为7个指定字符
//	cout << s3 << endl;
//}
//void test_string17()
//{
//	string s1 = "hello";
//	string s2 = "world";
//	s1.swap(s2);  //交换字符s1和s2
//	cout << s1 << endl;
//	cout << s2 << endl;
//}
//void test_string18()
//{
//	string s1 = "hello";
//	s1.pop_back();     //删掉最后一个字符
//	cout << s1 << endl;
//}
//
//void test_string19()
//{
//	string s1 = "hello";
//	string s2;
//	s1.reserve(100);   //预留了100个空间，当然实际预留的空间可能会略大一点
//	
//	s2.resize(50,'*');  //预留了50个空间，用指定字符初始化
//	cout << s2 << endl;
//	s2.resize(10);     //指定只保留十个空间的话，就会把多余的删除
//	cout << s2 << endl;
//	s2.resize(15);
//	cout << s2 << endl;
//}
//class Solution {
//public:
//	bool IsLetter(char ch)
//	{
//		if (ch <= 'Z' && ch >= 'A' || ch >= '1' && ch <= '9' || ch <= 'z' && ch >= 'a')
//			return true;
//		return false;
//	}
//	bool isPalindrome(string s) {
//		for (auto& it : s)
//		{
//			if (it <= 'z' && it >= 'a')
//			{
//				it = it - 32;
//			}
//		}
//		int left = 0;
//		int right = s.size() - 1;
//		while (left < right)
//		{
//			while (left < right && !IsLetter(s[left]))
//			{
//				left++;
//			}
//			while (left < right && !IsLetter(s[right]))
//			{
//				right--;
//			}
//			if (s[left]== s[right])
//			{
//				++left;
//				--right;
//			}
//			else
//				return false;
//		}
//		return true;
//	}
//};
//int main() {
//	// 实例化 Solution 对象
//	Solution sol;
//
//	// 准备测试用例，你可以在这里换成其他字符串测试
//	string s1 = "OP";
//	// string s1 = "A man, a plan, a canal: Panama"; 
//
//	// 调用对象的方法
//	bool result = sol.isPalindrome(s1);
//
//	// 输出结果
//	cout << "The string is: " << s1 << endl;
//	cout << "Is palindrome? " << (result ? "Yes" : "No") << endl;
//
//	return 0;
//}
//class Solution {
//public:
//    string addStrings(string num1, string num2) {
//        int end1 = num1.size() - 1;
//        int end2 = num2.size() - 1;
//
//    }
//};
void string_test20()
{
	string filename("string.cpp");   //比如要调用C语言读文件的接口就需要用到c_str来转换一下
	FILE* fout = fopen(filename.c_str(), "r");
	char ch = fgetc(fout);
	while (ch != EOF) {
		cout << ch;
		ch = fgetc(fout);
	}
}
 void split(const string& url)
{
	 size_t i1 = url.find(':');  //比如这里i1就是就是':'位置的下标
	 string protocol = url.substr(0, i1);  //截取从下标为0到i的字符串
	 size_t i2 = url.find('/', i1 + 3);
	 string domain = url.substr(i1 + 3, i2 - (i1 + 3));  //截取第二段
	 string uri = url.substr(i2 + 1);   //截取第三段
	 cout << protocol << endl;
	 cout << domain << endl;
	 cout << uri << endl;
}
 void split2(const string&url)
 {
	 size_t i1 = url.rfind('.');
	 string uri = url.substr(i1);
	 cout << uri << endl;
 }
 void test_string22()
 {
	 string s1 = "stringaaa";
	 string s2 = "aaaaa";
	 const char* p1 = "bb";
	 cout << (s1 > s2) << endl;
	 cout << (s1 < s2) << endl;
	 cout << (p1 > s2) << endl;
 }
 void test_string23()
 {
	 string s1 = "stringaaa";
	 string s2 = "aaaaa";
	 s1.swap(s2);
	 cout << s1 << endl;


 }
 void test_string24()
 {
	 string name;
	 //cout << "Please, enter your name:" << endl;//operator<<:输出字符串
	 cin >> name;     //operator>>:输入字符串
	 cout <<   name << endl;
 }
 void test_string25()
 {
	 string s1, s2;
	 cin >> s1;
	 cin >> s2;
	 cout << s1 << " " << s2 << endl;
 }
 void test_string26()
 {
	 string s1;
	 getline(cin, s1);
	 cout << s1 << endl;
 }
int main()
{
	/*int n = 7;
	n = n % 10;
	cout << n << endl;*/
	//string url1("legacy.cplusplus.com");
	//string url2("https://www.baidu.com/s?wd=%E7%BB%BF%E6%B0%B4%E9%9D%92%E5%B1%B1%E5%86%B0%E5%A4%A9%E9%9B%AA%E5%9C%B0%E9%83%BD%E6%98%AF%E9%87%91%E5%B1%B1%E9%93%B6%E5%B1%B1&sa=fyb_n_homepage&rsv_dl=fyb_n_homepage&from=super&cl=3&tn=baidutop10&fr=top1000&rsv_idx=2&hisfilter=1");
	//split2(url1);
	////split(url2);
	test_string26();
	return 0;
}