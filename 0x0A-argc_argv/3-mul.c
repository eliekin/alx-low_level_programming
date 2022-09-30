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

	if (args <= 2 || args > 3)
	{
		printf("Error");
		printf("\n");
		return (1);
	}
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d", result);
		printf("\n");
		return (0);
	}
}
