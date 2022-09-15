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
	int num1;
	int num2;
	int nextNum;

	times = 0;
	num1 = 0;
	num2 = 1;
	while (times <= 49)
	{
		nextNum = num1 + num2;
		printf("%d, ", nextNum);
		num1 = num2;
		num2 = nextNum; 
		times++;
	}
	return (0);
}
