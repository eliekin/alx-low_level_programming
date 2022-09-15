#include <stdio.h>
/**
* main - entry point
*
* Description: prints the first 50 fibonacci numbers
*
* Return: always zero
*/
int main(void)
{
	int times;
	long int num1;
	long int num2;
	long int nextNum;

	times = 0;
	num1 = 0;
	num2 = 1;
	while (times < 49)
	{
		nextNum = num1 + num2;
		if (times == 48)
		{
			printf("%li ", nextNum);
		}
		else
		{
			printf("%li, ", nextNum);
		}
		num1 = num2;
		num2 = nextNum;
		times++;
	}
	return (0);
}
