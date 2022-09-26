#include "main.h"
#include <string.h>
/**
* _strspn - length of a prefix substring
* @s: parameter
* @accept: parameter
*
* Return: unsigned int
*/

unsigned int _strspn(char *s, char *accept)
{
	int i;

	i = 0;
	while(s[i] && strchr(accept, s[i]))
		i++;
	return (length);
}
