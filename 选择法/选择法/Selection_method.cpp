#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//升序排序
//int main()//选择法排序（Selection method） 找到最小的元素下标，与第i个元素下标交换位置
//{
//	int i = 0;//控制循环
//	int j = 0;//控制循环
//	int temp = 0;//temp：用于交换时的临时变量
//	int min = 0;//最小值的下标存储
//	int arr[] = { 5,3,1,2,4,9,-2 };//待排序的数
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组大小
//	for (i = 0; i < sz; i++)
//	{
//		min = i;
//		//找最小的元素下标
//		for (j = i + 1; j < sz; j++)//从第二个元素下标开始遍历
//		{
//			if (arr[min] > arr[j])//如果min的元素大于j的元素，则将j的下标赋给min
//			{
//				min = j;
//			}
//		}
//		//找到最小的元素下标后，将其与第i个元素下标进行交换位置
//		temp = arr[i];//保留i下标的值
//		arr[i] = arr[min];//i下标与min下标的值进行互换，此时i下标为最小的值
//		arr[min] = temp;//将原先的i下标值赋给交换后的min下标位置
//		printf("%d ", arr[i]);//每找到一次最小值便打印一次
//	}
//	return 0;//从小到大排序
//}



int main()//选择法排序（Selection method） 找到最小的元素下标，与第i个元素下标交换位置
{
	int i = 0;//控制循环
	int j = 0;//控制循环
	//int a = 0;//控制输入次数
	int temp = 0;//temp：用于交换时的临时变量
	int max = 0;//最大值的下标存储
	int arr[] = { 5,3,4,1,2 };//待排序的数
	//printf("请输入你想排序多少个数字：\n");
	/*scanf("%d", &a);
	for (i = 0; i<=a; i++)
	{
		scanf("%d", &arr[i]);
	}*/
	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组大小
	for (i = 0; i < sz; i++)
	{
		max = i;
		//找最小的元素下标
		for (j = i + 1; j < sz; j++)//从第二个元素下标开始遍历
		{
			if (arr[max] < arr[j])//如果max的元素小于j的元素，则将j的下标赋给max
			{
				max = j;
			}
		}
		//找到最大的元素下标后，将其与第i个元素下标进行交换位置
		temp = arr[i];//保留i下标的值
		arr[i] = arr[max];//i下标与max下标的值进行互换，此时i下标为最大的值
		arr[max] = temp;//将原先的i下标值赋给交换后的max下标位置
		printf("%d ", arr[i]);//每找到一次最大值便打印一次
	}
	return 0;//从大到小排序
}