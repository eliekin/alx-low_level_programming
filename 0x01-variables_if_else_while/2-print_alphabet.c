#include <stdio.h>
#include <ctype.h>


/**
* main - entry point of the program 
*
* Description: prints the alphabet
*
* Return: always returns zero
*/


int main(void)
{	
	char c;
	
	for (c = 'A'; c <= 'Z'; ++c)
		putchar(tolower(c));
	return (0);
}
