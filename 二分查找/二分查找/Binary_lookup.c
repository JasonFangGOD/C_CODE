#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()//二分查找法，在一组数里，查找一个数，找到了输出下标，没找到则输出没找到
{
	int num = 0;//待输入要查找的数
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//假设查找数字7
	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组长度
	int left = 0;//数组最左边下标
	int right = sz - 1;//数组最右边下标
	printf("请输入你要查找的数: ");
	scanf("%d", &num);//输入查找的数
	while (left <= right)//当二分到左边下标=右边下标时，结束循环
	{
		int mid = left + (right - left) / 2;//防止内存越界
		if (arr[mid] > num)
		{
			right = mid - 1;
		}
		else if (arr[mid] < num)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了，下标是:%d \n", mid);
			break;
		}
		if (left > right)
		{
			printf("找不到，不在此数据里面\n");
			break;
		}
	}
	return 0;
}