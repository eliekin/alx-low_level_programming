#include "main.h"
/**
* print_chessboard - prints the chessboard
* @a: parameter
*
* Return: void
*/
void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	j = 0;
	for (a[i]; i < 9; i++)
	{
		for (a[j]; j < 9; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
