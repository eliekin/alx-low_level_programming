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
	char value;
	
	value = *s;
	lengthChar = strlen(value);
	for (letterPointer = lengthChar - 1; letterPointer >= 0; letterPointer--)
	{
		_putchar(value[letterPointer]);
	}
}
