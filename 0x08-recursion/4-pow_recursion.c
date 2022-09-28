#include "main.h"
/**
* _pow_recursion - x to the power of y
* @x: parameter
* @y: parameter
*
* Return: int
*/
int _pow_recursion(int x, int y)
{
	int e;

	if (y < 0)
	{
		return (-1);
	}
	for (e = 1; e < y; e++)
	{
		x *= x;
	}
	return (x);
}
