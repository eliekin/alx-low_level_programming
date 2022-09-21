#include "main.h"
#include <string.h>

/**
* _strcat - concatenates strings
* @dest: parameter
* @char: parameter
* Return: returns a character
*/
char *_strcat(char *dest, char *src)
{
	dest = strcat(dest, src);
	return (dest);
}
