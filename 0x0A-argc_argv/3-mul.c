#include <stdio.h>
#include "stdlib.h"

/**
* main - program that multiplies two numbers
* @argc: number of command-line arguments
* @argv: array of strings containing the command-line arguments
* Return: returns 0 (success)
*/
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
