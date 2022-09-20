#include "main.h"
/**
* print_array - prints array
* @a: parameter
* @n: parameter
* Return: void
*/

void print_array(int *a, int n)
{
	int place;

	for (place =  0; place <= n - 1; place++)
		printf("%c, ", a[place]);
}
