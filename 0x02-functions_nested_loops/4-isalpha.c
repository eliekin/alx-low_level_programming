#include "main.h"
#include <ctype.c>
/**
* main
* 
* Description:
*
* Return
*/
int _isalpha(int c)
{
	int response = isalpha(c);
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
