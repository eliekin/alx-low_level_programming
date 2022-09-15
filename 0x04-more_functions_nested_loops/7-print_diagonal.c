#include "main.h"
/**
* print_diagonal - prints \
* @n: is the parameter
*
* Return: always zero
*/
void print_diagonal(int n)
{
	int initialValue;

	initialValue = 0;
	while (initialValue < n)
	{
		_putchar('\');
		initialValue++;
	}
	_putchar('\n');
}
