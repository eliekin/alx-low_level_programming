#include <stdio.h>
/**
* main - entry point
*
* Description: prints the sum
*
* Return: always zero
*/
int main(void)
{
	int times;
	long int num1;
	long int num2;
	long int nextNum;
	long int sum;

	num1 = 0;
	num2 = 1;
	sum = 0;
	for (times = 0; times <= 49; times++)
	{
		nextNum = num1 + num2;
		num1 = num2;
		num2 = nextNum;
		if (nextNum < 4000000 && nextNum % 2 == 0)
		{
			sum += nextNum;
		}
	}
	printf("%li\n", sum);
	return (0);
}
