#include"judgemnt.h"

int main()
{
	// '/'��ȡ����   '%'��ȡ����
	int a = 0;
	printf("������Ҫ�жϵ���: ");
	scanf("%d", &a);
	//1.�ж��桢ż�� Parity����ż
	Parity(a);
	//2.�ж����������� ������Prime number ������Composite number
	Prime_number_Composite_number(a);
	//3.�ж����� ������Completion
	Completion(a);
	//4.�ж�ˮ�ɻ��� ˮ�ɻ���:Number of daffodils
	Number_of_daffodils(a);
	//5.
	//6.
	//7.
	return 0;
}
void Parity(int b)
{
	if (b % 2 == 0)
	{
		printf("\n%d��ż��,",b);
	}
	else
		printf("\n%d������,",b);
}
void Prime_number_Composite_number(int b)
{
	int i = 0;
	if (b <= 1)
	{
		printf("%d�Ȳ�������Ҳ���Ǻ���,", b);
	}
	else
	{
		for (i = 2; i < b ; i++)
		{
			if (b % i == 0)break;
		}
		if (i < b)
		{
			printf("%d�Ǻ���,", b);
		}
		else
			printf("%d������,", b);
	}
}

void Completion(int b)
{
	int i = 0;
	int a = 0;
	for (i = 1; i < b; i++)
	{
		if (b % i == 0)
		{
			a = i + a;
		}
	}
	if (a == b)
	{
		printf("%d������,", b);
	}
	else
		printf("%d��������,", b);
}

void Number_of_daffodils(int b)
{
	int a = 0;
	int c = 0;
	int d = 0;
	//if (b<100 || b > 999)
	//{
	//	printf("%d����ˮ�ɻ���", b);
	//}
	a = b / 100;
	c = b / 10 %10;
	d = b % 10;
	if (a * a * a + c * c * c + d * d * d == b)
	{
		printf("%d��ˮ�ɻ���", b);
	}
	else
		printf("%d����ˮ�ɻ���", b);
}
