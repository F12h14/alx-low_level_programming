#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int j;
	int n;

	n = 0;
	while (dest[n] != '\0')
	{
		n++;
	}

	j = 0;
	while (src[j] != '\0')
	{
		dest[n] = src[j];
		n++;
		j++;
	}

	dest[n] = '\0';
	return (dest);
}
