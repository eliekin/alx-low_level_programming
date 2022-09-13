#include "main.h"
#include <sdtio.h>

/**
 * print_to_98 - prints integer to 98
 * @n: n is an integer
 *
 * Return: nothing
 */
void print_to_98(int n)
{
	while (n < 99)
	{
		printf(n);
		printf(', ');
		n++;
	}
}
