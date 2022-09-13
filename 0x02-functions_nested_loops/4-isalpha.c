#include "main.h"
#include <ctype.c>

/**
 * _isalpha - checks for alphabetic character
 * @c: c is an ascii character
 *
 * Return: 1 (if letter)
 */

int _isalpha(int n)
{
	int response;

	response = isalpha(n);
	if (response > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
