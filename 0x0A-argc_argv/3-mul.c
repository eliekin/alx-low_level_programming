#include <stdio.h>
#include <stdlib.h>
/**
* main - entry point
* @argc: parameter
* @argv: parameter
* Return: int
*/
int main(int argc, char *argv[])
{
	long int result;
	int args = argc - 1;

	if (args == 0)
	{
		printf("Error");
		printf("\n");
		return (1);
	}
	if (args > 1)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%ld", result);
		printf("\n");
	}
	return (0);
}
