#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()//ð�ݷ�����
{
	int i = 0;
	int j = 0;
	int arr[] = { 3,44,38,5,47,15,36 };//�����������
	int sz = sizeof(arr) / sizeof(arr[0]);//���������С
	//����
	for (i = 0; i < sz; i++)//��һ���������ÿ�����Ƚ�
	{
		for (j = i + 1; j < sz; j++)//�ӵڶ�������ʼ���һ�������αȽ�
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
	for (i = 0; i < sz; i++)//��ӡ������ɵ���
	{
		printf("%d ", arr[i]);
	}
	return 0;
}