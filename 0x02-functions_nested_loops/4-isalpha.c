#include "main.h"
#include <ctype.c>
/**
* _isalpha - 
* 
* Description: checks for alphabetic character
*
* Return: 1 or 0 depending on the parameter value
*/
int _isalpha(int c)
{
	int response;

	response = isalpha(c);
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
