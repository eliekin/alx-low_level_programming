#include "lists.h"
#include <stdio.h>

/**
* print_list - prints all the elements in list_t
* @h: parameter
* Return: number of elements
*/

size_t print_list(const list_h *h)
{
	size_t size;

	size = 0;
	while (h != NULL)
	{
		size++;
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return(size);
}

