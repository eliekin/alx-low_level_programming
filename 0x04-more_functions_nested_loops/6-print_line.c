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
	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		while (initialValue < n + 1)
		{
			_putchar('_');
			initialValue++;
		}
	}
	_putchar('\n');
}
