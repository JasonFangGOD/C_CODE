#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"Processing_data.h"


int main()//给定一组数据，求总和（Sum）、平均值（Average_value）、最大值（Max）、最小值（Min）
{

	int arr[] = {1,5,7,3,9,2,-2,4,0,6,8,-8};//建立数组
	//int i = 0;
	//printf("请连续输入十个待计算数字 \n");
	//for (i = 0; i < 10; i++)
	//{
	//	scanf("%d", &arr[i]);
	//}
	int sz = sizeof(arr) / sizeof(arr[0]);//sz:计算数组大小

	//1.求总和（Sum）
	int sum=Sum(arr,sz);
	printf("这组数据的总和为: %d\n", sum);

	//2.平均值（Average_value）
	float av = Average_value(sum, sz);
	printf("这组数据的平均值为: %f\n", av);
	
	//3.最大值(Max)
	int max = Max(arr,sz);
	printf("这组数据的最大值为: %d\n", max);

	//4最小值(Min)
	int min = Min(arr, sz);
	printf("这组数据的最小值为: %d\n", min);
	
	return 0;
}



int Sum(int* arr1,int sz1)//求和
{
	int a = 0;
	int c = 0;
	for (int i = 0; i < sz1; i++)//创建一个循环，从下标为0开始依次相加最后返回
	{
		a = arr1[i];
		c = c + a;
	}
	return c;
}



float Average_value(int sum1,int sz1)//平均值
{
	return sum1 / sz1;//根据求和函数得到的值计算平均值
}



int Max(int* arr1, int sz1)//最大值
{
	int i = 0;
	int max = arr1[0];//取数组下标为0的数作为参考
	for (i = 0; i < sz1; i++)//依次比较，最后返回最大值
	{
		if (max < arr1[i])
		{
			max = arr1[i];
		}
	}
	return max;
}


int Min(int* arr1, int sz1)//最小值
{
	int min = arr1[0];//取数组下标为0的数作为参考
	int i = 0;
	for (i = 0; i < sz1; i++)//依次比较，最后返回最小值
	{
		if (min > arr1[i])
		{
			min = arr1[i];
		}
	}
	return min;
}