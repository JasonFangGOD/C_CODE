#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()//百鸡问题：鸡翁一值钱五，鸡母一值钱三，鸡雏三值钱一。百钱买百鸡，问鸡翁、鸡母、鸡雏各几何？
{
	//设鸡翁x只，鸡母y只，鸡雏z只
	//1.x+y+z=100 一共一百只
	//2.5x+3y+z/3==100
	int x = 0;//鸡翁
	int y = 0;//鸡母
	int z = 0;//鸡雏
	for (x = 0; x < 100; x++)
	{
		for (y = 0; y < 100; y++)
		{
			z = 100 - x - y;
			if (z < 0)
				continue;
			if (((5 * x + 3 * y + z / 3) == 100) && (z % 3 == 0))
			{
				printf("鸡翁有%d只，鸡母有%d只，鸡雏有%d只\n", x, y, z);
			}
		}
	}
	return 0;
}