#define _CRT_SECURE_NO_WARNINGS
#include"Stack.h"
namespace bit
{
	void STInit(ST* ps)
	{
		assert(ps);
		ps->a = (STDataType*)malloc(4 * sizeof(STDataType));
		ps->top = 0;
		ps->capacity = 4;
	}
	// 栈顶
	void STPush(ST* ps, STDataType x)
	{
		assert(ps);
		//...
	}
	//...
}