#include <stdio.h>
/**
* main - entry point
* @argc: parameter
* @argv: parameter
* Return: int
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
		printf("\n");
	}
	return (0);
}
