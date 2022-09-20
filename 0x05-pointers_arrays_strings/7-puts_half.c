#include "main.h"
#include <string.h>
/**
* puts_half - prints reverse s
* @str: parameter
*
* Return: void
*/
void puts_half(char *str)
{
	int lengthChar, letterPointer, num;

	lengthChar = strlen(str);
	num = (lengthChar - 1) / 2;
	if (lengthChar % 2 != 0)
		for (letterPointer = num; letterPointer <= lengthChar; letterPointer++)
			_putchar(str[letterPointer]);
	else
		for (letterPointer = lengthChar / 2; letterPointer <= lengthChar; letterPointer++)
			_putchar(str[letterPointer]);
	_putchar('\n');
}
