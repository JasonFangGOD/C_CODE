#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()//���ֲ��ҷ�����һ���������һ�������ҵ�������±꣬û�ҵ������û�ҵ�
{
	int num = 0;//������Ҫ���ҵ���
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//�����������7
	int sz = sizeof(arr) / sizeof(arr[0]);//�������鳤��
	int left = 0;//����������±�
	int right = sz - 1;//�������ұ��±�
	printf("��������Ҫ���ҵ���: ");
	scanf("%d", &num);//������ҵ���
	while (left <= right)//�����ֵ�����±�=�ұ��±�ʱ������ѭ��
	{
		int mid = left + (right - left) / 2;//��ֹ�ڴ�Խ��
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
			printf("�ҵ��ˣ��±���:%d \n", mid);
			break;
		}
		if (left > right)
		{
			printf("�Ҳ��������ڴ���������\n");
			break;
		}
	}
	return 0;
}