#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int num1 = 17;
	int num2 = 15;

	int mcd;

	while (1)
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

		if (mcd == 0)
		{
		
			printf("最大公约数为%d",(num1<num2)?num2:num1 );
		
			break;
			
		}
		
	}
}
