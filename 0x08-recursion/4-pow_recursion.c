#include "main.h"
#include <math.h>
/**
* _pow_recursion - x to the power of y
* @x: parameter
* @y: parameter
*
* Return: int
*/
int _pow_recursion(int x, int y)
{
	int resutl;

	if (y < 0)
	{
		return (-1);
	}
	result = pow(x, y);
	return (result);
}
