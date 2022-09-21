#include "main.h"
#inlcude <string.h>
/**
* _strcat - concatenates strings
* @dest: parameter
* @char: parameter
* Return: returns a character
*/
char *_strcat(char *dest, char *strc)
{
	int i;

	i = 0;
	while (strc[i] != '\0')
	{
		i++;
	}
	return (strcat(dest, strc[i]));
	
}
