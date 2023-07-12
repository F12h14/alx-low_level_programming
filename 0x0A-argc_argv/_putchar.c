#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: Always 1 (Success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
