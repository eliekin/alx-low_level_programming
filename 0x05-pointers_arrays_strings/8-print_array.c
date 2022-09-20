#include "main.h"
#include <stdio.h>
/**
* print_array - prints array
* @a: parameter
* @n: parameter
* Return: void
*/

void print_array(int *a, int n)
{
	int place;

	for (place =  0; place <= n; place++)
		printf("%d, ", a[place]);
}
