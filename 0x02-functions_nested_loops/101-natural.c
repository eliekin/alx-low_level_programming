#include <stdio.h>
/**
* main - entry point
*
* Description: computes and prints the sum
*
* Return: always zero (success)
*/

int main(void)
{
	int num;
	int sum;

	sum = 0;
	for (num = 0; num < 1024; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			sum+= num; 	
		}
	}
	printf("%d\n", sum);
	return (0);
}
