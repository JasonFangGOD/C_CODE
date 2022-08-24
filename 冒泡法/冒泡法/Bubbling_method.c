#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()//冒泡法排序
{
	int i = 0;
	int j = 0;
	int arr[] = { 3,44,38,5,47,15,36 };//待排序的数据
	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组大小
	//升序
	for (i = 0; i < sz; i++)//第一个数与后面每个数比较
	{
		for (j = i + 1; j < sz; j++)//从第二个数开始与第一个数依次比较
		{
			int temp = 0;
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (i = 0; i < sz; i++)//打印排序完成的数
	{
		printf("%d ", arr[i]);
	}
	return 0;
}