#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - determine if number is positive or negative
 *
 * Description: program will find the last digit of 
 * a random number and tell if it is positive or negative
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int lastnum;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastnum = n % 10;
	if (lastDigit < 6 && lastDigit != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastnum);
	else if (lastDigit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastnum);
	else
		printf("Last digit of %d is %d and is 0\n", n, lastnum);

	return (0);
}
