#define _CRT_SECURE_NO_WARNINGS
#include<vector>
#include<iostream>
using namespace std;
int main()
{
	// vector<int> v1;：默认构造一个空的 int 向量，元素个数为 0。
	// vector<int> v1(10, 1);：构造 10 个元素，每个元素都是 1。
	// 注意括号版本是“个数 + 初始值”；若写成 {10, 1}，则表示两个元素 10 和 1。
	vector<int>v1(10, 1);

	// 拷贝构造：v2 是 v1 的副本，初始也有 10 个 1，但后续修改互不影响。
	vector<int>v2(v1);

	// 默认构造一个空的 char 向量，当前元素个数为 0。
	vector<char>v3;

	// size() 返回元素个数，类型是 size_t（无符号整数），所以循环变量也用 size_t。
	// i < v1.size() 保证只访问有效下标 0 ~ size()-1。
	//for (size_t i = 0; i < v1.size(); i++)
	//{
	//	// operator[] 按下标读取元素，不做越界检查；输出后 endl 会换行并刷新缓冲区。
	//	cout << v1[i] ;
	//}
	//cout << endl;

	//vector<int>::iterator it = v1.begin();  //迭代器打印
	//while (it != v1.end())
	//{
	//	cout << *it;
	//	it++;
	//}
	//cout << endl;
	//for (auto ch : v1)  //范围for打印
	//{
	//	cout << ch;
	//}
	//cout << endl;
	//v1.insert(v1.begin(), 2);   //insert在第一个位置插入2
	//for (auto ch : v1)
	//{
	//	cout << ch;
	//}
	//cout << endl;
	//v1.insert(v1.begin() + 5, 3);//在第6个位置插入3
	//for (auto ch : v1)
	//{
	//	cout << ch;
	//}
	//cout << endl;
	//v1.erase(v1.begin(), v1.begin() + 5);  //erase的范围区间是左闭右开
	//for (auto ch : v1)                     //所以要删除[0,4]就要写成[0,5)才可以
	//{
	//	cout << ch;
	//}
	//cout << endl;

	/*vector<int>v5;
	v5.resize(3);
	for (size_t i = 0; i < 3; i++)
	{
		cin >> v5[i];
	}
	for (auto ch : v5)
	{
		cout << ch;
	}
	cout << endl;

	return 0;*/
	//vector<string>v6;
	//v6.push_back("张三");
	//v6.push_back("李四");
	//v6.push_back("xxxxxxxxx");
	//for (const auto& ch : v6)  //因为string是深拷贝，所以拷贝的代价大，那我们这里就用引用，如果是不能更改的
	//{                          //最好也是加上const
	//	cout << ch<<endl;
	//}
	//cout << endl;
	//v6[0] = "张三三";     //这样可以改变第一个对象的值
	//for ( const auto& ch : v6)
	//{
	//	cout << ch << endl;
	//}
	//cout << endl;
	//v6[2][0] = 'y';   //可以通过这种方式来改变对象中的某一个具体值
	//for (const auto& ch : v6)
	//{
	//	cout << ch << endl;
	//}
	//cout << endl;




	
	vector<vector<int>>vv(3);
	
	for (auto&v : vv)
	{                        
		v.resize(5,1);

	}
	for (size_t i = 0; i < 3; i++)   //打印格式规律的vector
	{
		for (size_t j = 0; j < 5; j++)
		{
			cout << vv[i][j] ;
		}
		cout << endl;
	}
	cout << endl;





	vector<vector<int>>vv2(3);
	for (auto& v2 : vv2)
	{
		vv2[0].resize(5, 1);
		vv2[1].resize(3, 2);
		vv2[2].resize(4, 6);
	}
	for (size_t i = 0; i < vv2.size(); i++)  //不规律分布vector打印
	{
		for (size_t j = 0; j < vv2[i].size(); j++)
		{
			cout << vv2[i][j];
		}
		cout << endl;
	}
}
