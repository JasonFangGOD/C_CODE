#include"judgemnt.h"

int main()
{
	// '/'是取整数   '%'是取余数
	int a = 0;
	printf("请输入要判断的数: ");
	scanf("%d", &a);
	//1.判断奇、偶数 Parity：奇偶
	Parity(a);
	//2.判断质数、合数 质数：Prime number 合数：Composite number
	Prime_number_Composite_number(a);
	//3.判断完数 完数：Completion
	Completion(a);
	//4.判断水仙花数 水仙花数:Number of daffodils
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
		printf("\n%d是偶数,",b);
	}
	else
		printf("\n%d是奇数,",b);
}
void Prime_number_Composite_number(int b)
{
	int i = 0;
	if (b <= 1)
	{
		printf("%d既不是质数也不是合数,", b);
	}
	else
	{
		for (i = 2; i < b ; i++)
		{
			if (b % i == 0)break;
		}
		if (i < b)
		{
			printf("%d是合数,", b);
		}
		else
			printf("%d是质数,", b);
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
		printf("%d是完数,", b);
	}
	else
		printf("%d不是完数,", b);
}

void Number_of_daffodils(int b)
{
	int a = 0;
	int c = 0;
	int d = 0;
	//if (b<100 || b > 999)
	//{
	//	printf("%d不是水仙花数", b);
	//}
	a = b / 100;
	c = b / 10 %10;
	d = b % 10;
	if (a * a * a + c * c * c + d * d * d == b)
	{
		printf("%d是水仙花数", b);
	}
	else
		printf("%d不是水仙花数", b);
}
