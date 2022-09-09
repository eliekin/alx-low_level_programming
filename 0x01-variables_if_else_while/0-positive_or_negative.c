#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
<<<<<<< HEAD
 * main - determine if number is positive or negative
 *
 * Description: program will assign a random number to the variable n each time
 * it is executed.
 *
 * Return: Always 0 (Success)
 */

=======
* main: entry point of the program 
*
* Description: This program will assign a random
* number to the variable n each time it is executed. 
* then prints whether the number stored in the variable
* n is positive or negative.
* 
* return: always returns zero (success)
*/
>>>>>>> e5b237f1e17ebd4e3c743d32deb8ee729e2b1959
int main(void)
{
	int n;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
<<<<<<< HEAD
	if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is positive\n", n);

=======
	/* your code goes there */
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n==0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is positive\n", n);
	}
>>>>>>> e5b237f1e17ebd4e3c743d32deb8ee729e2b1959
	return (0);
}
