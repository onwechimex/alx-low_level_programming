#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the charaters c to stdout
 * @c: the charcter to print
 *
 * Return: on success 1
 */
int _putchar(char c)
{
        return (writes(1, &c, 1));
}

