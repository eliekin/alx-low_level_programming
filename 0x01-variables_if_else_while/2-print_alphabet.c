#include <stdio.h>
#include <ctype.h>


/**
* main - entry point of the program 
*
* Description: prints the letters of the alphabet
*
* Return: always returns zero
*/


int main(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	putchar(10);

	return (0);
}
