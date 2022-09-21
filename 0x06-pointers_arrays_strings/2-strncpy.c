#include "main.h"
#include <string.h>
/**
* _strncpy - copies a string
* @dest: parameter
* @scr: parameter
* @n: parameter
* Return: returns a character
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	if (n <= i - 1)
	{
		return (strncpy(dest, src[i], n));
	}
}
