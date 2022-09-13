#include "main.h"
/**
* print_last_digit: prints the last digit
*
* Description: prints the last digit
* 
* Return: returns the last digit of the number
*/
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	_putchar(last_digit);
	return (last_digit);
}
