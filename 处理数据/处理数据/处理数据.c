#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"Processing_data.h"


int main()//����һ�����ݣ����ܺͣ�Sum����ƽ��ֵ��Average_value�������ֵ��Max������Сֵ��Min��
{

	int arr[] = {1,5,7,3,9,2,-2,4,0,6,8,-8};//��������
	//int i = 0;
	//printf("����������ʮ������������ \n");
	//for (i = 0; i < 10; i++)
	//{
	//	scanf("%d", &arr[i]);
	//}
	int sz = sizeof(arr) / sizeof(arr[0]);//sz:���������С

	//1.���ܺͣ�Sum��
	int sum=Sum(arr,sz);
	printf("�������ݵ��ܺ�Ϊ: %d\n", sum);

	//2.ƽ��ֵ��Average_value��
	float av = Average_value(sum, sz);
	printf("�������ݵ�ƽ��ֵΪ: %f\n", av);
	
	//3.���ֵ(Max)
	int max = Max(arr,sz);
	printf("�������ݵ����ֵΪ: %d\n", max);

	//4��Сֵ(Min)
	int min = Min(arr, sz);
	printf("�������ݵ���СֵΪ: %d\n", min);
	
	return 0;
}



int Sum(int* arr1,int sz1)//���
{
	int a = 0;
	int c = 0;
	for (int i = 0; i < sz1; i++)//����һ��ѭ�������±�Ϊ0��ʼ���������󷵻�
	{
		a = arr1[i];
		c = c + a;
	}
	return c;
}



float Average_value(int sum1,int sz1)//ƽ��ֵ
{
	return sum1 / sz1;//������ͺ����õ���ֵ����ƽ��ֵ
}



int Max(int* arr1, int sz1)//���ֵ
{
	int i = 0;
	int max = arr1[0];//ȡ�����±�Ϊ0������Ϊ�ο�
	for (i = 0; i < sz1; i++)//���αȽϣ���󷵻����ֵ
	{
		if (max < arr1[i])
		{
			max = arr1[i];
		}
	}
	return max;
}


int Min(int* arr1, int sz1)//��Сֵ
{
	int min = arr1[0];//ȡ�����±�Ϊ0������Ϊ�ο�
	int i = 0;
	for (i = 0; i < sz1; i++)//���αȽϣ���󷵻���Сֵ
	{
		if (min > arr1[i])
		{
			min = arr1[i];
		}
	}
	return min;
}