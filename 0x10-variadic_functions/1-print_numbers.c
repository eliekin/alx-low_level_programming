#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_numbers - prints numbers
* @separator: parameter
* @n: parameter
* Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unisgned int i;
	va_list args;
	va_start(args, n);

	if (n == 0)
		printf("\n");
		return;
	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
			if (i == n - 1)
				printf("%d\n", va_arg(args, int));
			else
				printf("%d", va_arg(args, int));
		else
			
			if (i == n - 1)
				printf("%d\n", num);
			else
				printf("%d%s", num, separator);
	}
	va_end(args);
}
