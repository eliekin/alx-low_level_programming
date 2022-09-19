#include "main.h"
#include <string.h>
/**
* rev_string - prints reverse s
* @s: parameter
*
* Return: void
*/
void rev_string(char *s)
{
	int lengthChar, letterPointer;

	lengthChar = strlen(s);
	for (letterPointer = lengthChar - 1; letterPointer >= 0; letterPointer--)
	{
		_putchar(s[letterPointer]);
	}
}
