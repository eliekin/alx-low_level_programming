#include "main.h"
/**
* more_numbers - prints numbers
*
* Description: prints numbers
*
* Return: returns nothing
*/

void more_numbers(void)
{
	int times;
	int num;

	for (times = 0; times < 10; times++)
	{
		for (num = 0; num <= 14; num++)
		{
			_putchar(num);
		}
		_putchar('\n');
	}
}
