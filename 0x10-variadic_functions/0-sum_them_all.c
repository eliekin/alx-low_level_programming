#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - sum of all its parameters
* @n: number of parameters
* Return: int
*/
int sum_them_all(const unsigned int n, ...)
{
	int i, sum, argumentsValue;
	va_list args;
	va_start(args, n);

	sum = 0;
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		argumentsValue = va_arg(args, int);
		sum += argumentsValue;
	}
	va_end(args);
	return (sum);
}
