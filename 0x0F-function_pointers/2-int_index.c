#include "function_pointers.h"
#include <stdlib.h>
/**
* int_index - searches for an integer
* @array: parameter
* @size: parameter
* @cmp: parameter
* Return: int
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, response;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		response = cmp(array[i]);
		if (response != 0)
			return (0);
	}
	return (-1);
}
