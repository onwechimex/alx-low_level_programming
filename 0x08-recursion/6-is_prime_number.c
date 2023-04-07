#include "main.h"

int prime_function(int n, int j);
/**
* is_prime_number - a function that checks if an input integer is prime
* @n: the nuber to be checked
* Return: returns 1 if the input integer is prime, returns 0 otherwise
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (prime_function(n, n - 1));
}

/**
* prime_function - a function that checks if a number is prime using recursion
* @n: the number to be checked
* @j: a variable used to iterate
* Return: returns 1 if the number is prime and 0 otherwise
*/
int prime_function(int n, int j)
{
	if (j == 1)
	{
		return (1);
	}
	if (n % j == 0 && j > 0)
	{
		return (0);
	}

	return (prime_function(n, j - 1));
}
