#include "main.h"
/**
* print_line - prints n times lines
* @n: numbers of times
*
* Return: always zero
*/

void print_line(int n)
{
	int initialValue;

	initialValue = 0;
	while (initialValue <= n)
	{
		if (n == 0 || n < 0)
		{
			_putchar('\n');
		}
		_putchar('_');
		n++;
	}
}
