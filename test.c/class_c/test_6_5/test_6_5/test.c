#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int removeElement(int *nums,int numsSize,int val)
//{
//	int sul = 0;
//	int dev = 0;
//	for (int i = 0; i < numsSize; i++)
//	{
//		if (nums[i] == val)
//		{
//			sul++;
//
//		}
//		else
//		{
//			nums[dev] = nums[sul];
//			sul++;
//			dev++;
//		}
//	}
//		return dev;
//	
//}
int removeDuplicates(int* nums, int numsSize) {
	int dev = 0;
	int sul = 0;
	for (int i = 0; i < numsSize - 1; i++)
	{
		if (nums[i] != nums[i + 1])
		{
			dev++;
			sul++;
			nums[dev] = nums[sul];
		}
		else
		{
			sul++;
		}

	}
	return dev;

}
int main()
{
	int nums[] = { 1,1,2 };
	int val = 2;
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	
	int k = removeDuplicates(nums,numsSize);
	printf("%d", k);
	return 0;
}