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
<<<<<<< HEAD
	int e;
=======
	int result;
>>>>>>> f92c94659c28f58a6c4acbe28d3cd4eaf9182696

	if (y < 0)
	{
		return (-1);
	}
<<<<<<< HEAD
	for (e = 1; e < y; e++)
	{
		x *= x;
	}
	return (x);
=======
	result = pow(x, y);
	return (result);
>>>>>>> f92c94659c28f58a6c4acbe28d3cd4eaf9182696
}
