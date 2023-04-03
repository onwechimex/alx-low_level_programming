#include "main.h"
#include <stdio.h>

/**
* print_chessboard - a function that prints the chessboard
* @a: pointer to an 8x8 array of characters
* Return: returns nothing
*/
void print_chessboard(char (*a)[8])
{
	int u, p;

	for (u = 0; u < 8; u++)
	{
		for (p = 0; p < 8; p++)
		{
			printf("%c", a[u][p]);
		}
		printf("\n");
	}
}
