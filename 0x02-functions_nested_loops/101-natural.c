#include <stdio.h>
/**
* main - entry point
* 
* Description:computes and prints the sum of all the multiples of 3 or 5 below 1024
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
			sum += num; 	
		}
	}
	printf("%d", sum)
	return (0);
}
