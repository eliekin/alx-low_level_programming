#include "main.h"
#include <stdio.h>
/**
* _puts_recursion - prints a string
* @s: parameter
*
* Return: void
*/
void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		puts(s[i]);
	}
	puts('\n');
}
