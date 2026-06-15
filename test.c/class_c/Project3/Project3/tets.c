//#define _CRT_SECURE_NO_WARNINGS
//typedef int LDataType
//typedef struct ListNode
//{
//	LDataType data;
//	ListNode next;
//}LNode; *LinkList;
//LNode* BuyListNode()
//{   //malloc申请空间
//	Lnode* Newnode = (LNode*)malloc(sizeof(LNode));
//	if (Newnode == null)
//	{
//		printf("空间申请失败\n");//判断空间是否开辟成功
//		exit(-1);
//	}
//	Newnode->data = data;    //申请成功之后对数据和存放的地址都初始化
//	Newnode->next = NULL;
//	return L;
//}
//ListInit()//初始化链表
//{
//	LNode*node=BuyListNode(-1);
//	return node;
//}
//void ListPrint(LNode* L)
//{
//	LNode* cur = L->next;
//	while (cur)//跳出循环意味着链表结束
//	{
//		printf("%d->", L->data);
//		cur = cur->next;//当前结点的next存储下一个结点的地址
//	}printf("NULL\n");
//}
//
//// 获取链表元素个数
//int ListSize(LNode* L)
//{
//	LNode* cur = L->next;//第一个有效节点，注意头结点中不存储有效数值，所以不能将头结点算入其中
//	int k = 0;
//	while (cur)
//	{
//		cur = cur->next;
//		k++;
//	}
//	return k;
//}、
//LNode* ListLocateElem(LNode* L, LDataType x)
//{
//	LNode* cur = L->next;
//	while (cur)
//	{
//		if (cur->data == x)
//		{
//			return cur;
//		}
//		else
//		{
//			cur = cur->next;
//		}
//	}
//	return NULL;
//}
//
//// 返回下标为 i 的结点（从 0 开始）
//LNode* ListGetElem(LNode* L, int i)
//{
//	assert(L);
//	assert(i >= 0);   //保证i在合理范围之内
//	LNode* iNode = L->next;
//	int j = 0;
//	while (iNode&&j<i)   //重新创建一个新的变量j来控制2循环次数
//	{
//			iNode = iNode->next;
//			j++;
//	}
//	return iNode;
//}
//void ListInsert(LNode* L, int i, LDataType x)
//{
//	assert(L);  //哨兵位的头指针不能为空
//	assert(i >= 0)
//	LNode* i_1node = L;
//	int j = -1;
//	while (j < i - 1 && i_1node)
//	{
//		i_1node = i_1node->next;
//		j++;
//	}
//	assert(i_1node);
//	LNode* Newnode = BuyListNode(x);  //注意此处顺序
//	Newnode->next = i_1node->next;
//	i_1node->next = Newnode;
//}
LDataType ListDelete(LNode* L, int i)
{
	assert(L);
	assert(i >= 0);
	LNode* i_1node = L;
	int j = -1;
	while (j < i - 1 && i_1node)
	{
		i_1node = i_1node->next;
		j++;
	}
	assert(i_1node&&i_1node->next);//如果断言失败就说明违法访问
	LNode*inode = i_1node->next;
	i_1node->next = inode->next;//第i-1个结点的next指向第i+1个结点
	LDataType X = inode->data;
	free(inode);
	return X;

}