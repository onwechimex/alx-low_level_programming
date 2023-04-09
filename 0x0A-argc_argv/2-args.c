#include <stdio.h>

/**
 * main - a program that prints all arguments it recieves
 * @argc: the number of command-line arguments
 * @argv: an array of strings containing the command-line arguments
 * Return: return 0 (sucess)
 */

int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
