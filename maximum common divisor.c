#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int num1 = 17;
	int num2 = 15;

	int mcd= 1;

	while (mcd == 0)
	{
		if (num1 > num2)
		{
			mcd = num1 % num2;
			num1 = num2;
			num2 = mcd;

		}
		else
		{
			mcd = num2 % num1;
			num2 = num1;
			num1 = mcd;
		}

	}
	printf("最大公约数为%d", (num1 < num2) ? num2 : num1);
}
