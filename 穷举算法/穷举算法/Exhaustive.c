#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()//�ټ����⣺����һֵǮ�壬��ĸһֵǮ����������ֵǮһ����Ǯ��ټ����ʼ��̡���ĸ�����������Σ�
{
	//�輦��xֻ����ĸyֻ������zֻ
	//1.x+y+z=100 һ��һ��ֻ
	//2.5x+3y+z/3==100
	int x = 0;//����
	int y = 0;//��ĸ
	int z = 0;//����
	for (x = 0; x < 100; x++)
	{
		for (y = 0; y < 100; y++)
		{
			z = 100 - x - y;
			if (z < 0)
				continue;
			if (((5 * x + 3 * y + z / 3) == 100) && (z % 3 == 0))
			{
				printf("������%dֻ����ĸ��%dֻ��������%dֻ\n", x, y, z);
			}
		}
	}
	return 0;
}