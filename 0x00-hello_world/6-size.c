#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	char d;
	int a;
	long int b;
	long long int c;
	float f;

	printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(d));
	printf("Size of an int: %lu bytes(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(c));
	printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(f));
	return (0);
}
