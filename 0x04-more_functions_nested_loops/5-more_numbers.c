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

	times = 0;
	while (times <= 9)
	{
		for (num = 0; num <= 14; num++)
		{
			_putchar(num);
			_putchar('\n');
		}
		times++;
	}
}
