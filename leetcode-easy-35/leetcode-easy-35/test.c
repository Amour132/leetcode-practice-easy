//给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。
//如果目标值不存在于数组中，返回它将会被按顺序插入的位置。
//你可以假设数组中无重复元素。
//示例 1:
//输入 : [1, 3, 5, 6], 5
//输出 : 2
//示例 2 :
//输入 : [1, 3, 5, 6], 2
//输出 : 1
//示例 3 :
//输入 : [1, 3, 5, 6], 7
//输出 : 4
//示例 4 :
//输入 : [1, 3, 5, 6], 0
//输出 : 0
#include <stdio.h>

int searchInsert(int *arr, int length,int target)
{
	int i = 0;
	int ret = 0;
	for (i = 0; i < length; i++)
	{
		if (arr[i] == target) //如果找到返回下标
		{
			return i;
		}
		if (arr[i] < target)//如果小于要插入的数字记录下表不断更新
		{
			ret = i;
		}
	}
	if (target>arr[0])//防止出现要插入的位置是第一个
	{
		return ret + 1;
	}
	return 0;
}

int main()
{
	int arr[] = { 1,3,5,6 };
	int size = sizeof(arr) / sizeof(arr[0]);
	printf("%d", searchInsert(arr, size,0));

	return 0;
}