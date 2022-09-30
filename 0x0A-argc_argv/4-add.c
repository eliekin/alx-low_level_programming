#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - entry point
* @argc: parameter
* @argv: parameter
* Return: int
*/
int main(int argc, char *argv[])
{
	int result, i;

	result = 0;
	if (argc == 1)
	{
		printf("%d\n", argc);
	}
	for (i = 1; i < argc; i++)
	{
		if (*argv[i] >= 'a' && *argv[i] <= 'z')
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			result += atoi(argv[i]);
			printf("%d", result);
		}
	}
	return (0);
}
