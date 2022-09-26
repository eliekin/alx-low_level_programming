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
	unsigned int length;

	s = strspn(s, accept);
	length = strlen(s);
	return (length);
}
