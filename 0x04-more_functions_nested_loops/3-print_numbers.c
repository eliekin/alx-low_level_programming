#include "main.h"
/**
* print_numbers - prints numbers
*
* Description: prints numbers 0 to 9
*
* Return: returns nothing.
*/
void print_numbers(void)
{
	int num;

	num = 0;
	while (num <= 9)
	{
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
