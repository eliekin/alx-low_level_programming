#include "main.h"
#inclde <string.h>
/**
* _strncat - concaternates two string
* @dest: parameter
* @src: parameter
* @n: parameter
* Return: returns character
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (strncat(dest, src, n));
}
