#include <stdio.h>

/**
 * main - a program that will print its name
 * @argc: number of a command-line arguments
 * @argv: an array of strings that contains the command-line arguments
 * Return: returns 0 (success)
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}


