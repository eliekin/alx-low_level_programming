#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main:  entry point of the program 
*
* Description: This program will assign a random number to the variable n each time it is executed. 
* 
* then prints whether the number stored in the variable n is positive or negative.
* 
* return: always returns zero 
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n==0)
	{
		printf("%d is zero\n", n);
	}
	{
		printf("%d is positif\n", n);
	}
	return (0);
}
