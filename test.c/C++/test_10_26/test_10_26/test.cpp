#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//void Test()
//{
//	//动态申请一个int类型的空间
//	int* ptr4 = new int;
//
//	//动态申请一个int类型的空间并且初始化为10
//	int* ptr5 = new int(10);
//
//	//动态申请十个int类型的空间
//	int* ptr6 = new int[10];
//
//
//	delete ptr4;
//	delete ptr5;
//	delete []ptr6;
//}
#include<iostream>
using namespace std;
class A
{
public:
	 A(int a=0)
		 :_a(a)
	{
		 cout << "A()" << endl;
	}
	 ~A()
	 {
		 cout << "~A()" << endl;
	 }
private:
	int _a;
};
//int main()
//{
//	// new/delete和malloc/free最大的区别就是：new/detele不止可以申请新的空间，
//	// 而且会自动调用构造和析构函数
//	A* p1 = (A*)malloc(sizeof(A));
//	A* p2 = new A(1);
//	free(p1);      //new/detele和malloc/free的搭配是固定的，不能随意更换
//	delete(p2);
//
//
//	//对于内置类型来说几乎是没有什么区别的
//	int* p4 = (int*)malloc(sizeof(int));
//	int* p5 = new int;
//	free(p4);
//	delete p5;
//
//	//对于类类型来说才是有差异的
//	int* p6 = (int*)malloc(sizeof(int) * 10);
//	int* p7 = new int[10]; //用new申请多个空间时也是可以初始化的
//	//初始化方式：
//	int* p8 = new int[5] {1, 2, 3}; //没有初始化的值就默认为0了
//	free(p6);
//	delete[]p7;
//	delete[] p8;
//
//
//
//	A* p9 = new A[10]{A(1),A(2),A(3)};  //两种写法都是支持的
//	A* p10 = new A[10]{ 1,2,3,4,5 };
//}
/*
operator new：该函数实际通过malloc来申请空间，当malloc申请空间成功时直接返回；申请空间
失败，尝试执行空               间不足应对措施，如果改应对措施用户设置了，则继续申请，否
则抛异常。
*/
//void* __CRTDECL operator new(size_t size) _THROW1(_STD bad_alloc)
//{
//	// try to allocate size bytes
//	void* p;
//	while ((p = malloc(size)) == 0)
//		if (_callnewh(size) == 0)
//		{
//			// report no memory
//			// 如果申请内存失败了，这里会抛出bad_alloc 类型异常
//			static const std::bad_alloc nomem;
//			_RAISE(nomem);
//		}
//	
//		return (p);
//}
///*
//operator delete: 该函数最终是通过free来释放空间的
//*/
//void operator delete(void* pUserData)
//{
//	_CrtMemBlockHeader* pHead;
//	RTCCALLBACK(_RTC_Free_hook, (pUserData, 0));
//	if (pUserData == NULL)
//		return;
//	_mlock(_HEAP_LOCK);  /* block other threads */
//	__TRY
//		        /* get a pointer to memory block header */
//		pHead = pHdr(pUserData);
//	         /* verify block type */
//	_ASSERTE(_BLOCK_TYPE_IS_VALID(pHead->nBlockUse));
//	_free_dbg(pUserData, pHead->nBlockUse);
//	__FINALLY
//		_munlock(_HEAP_LOCK);  /* release other threads */
//	__END_TRY_FINALLY
//		return;
//}
///*
//free的实现
//*/
//#define   free(p)               _free_dbg(p, _NORMAL_BLOCK)
   

int main()
{
	//A* p4 = (A*)malloc(sizeof(A));
	//new(p4)A(1); //这就是replacement new的用法

	//p4->~A();   //析构是可以直接像这样调用的，但是构造是不可以的
	//delete p4;  //这两部分加起来也就和delete的功能一样了 


	//A* p5 = (A*)poolalloc(sizeof(A));
	//new(p5)A(1);



 int*p4= new int [10];
	 free (p4);

	 A* p5 = new A[10];
	 //free(p5);
}