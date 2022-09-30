#include "main.h"
#include <stdio.h>
/**
* main - entry point
* @argc: parameter
* @argv: parameter
* Return: int
*/
int main(int argc, __attribute__((unused)) char *argv[])
{
	int args = argc - 1;

	printf("%d\n", args);
	return (0);
}
