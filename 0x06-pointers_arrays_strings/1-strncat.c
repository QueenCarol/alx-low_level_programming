#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @n: integer parameter to compare index to
 * @src: string
 * @dest: destination of the string
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_les = 0;

	while (dest[i++])
		dest_les++;

	for (i = 0; src[i] && i < n; i++)
		dest[dest_les++] = src[i];

	return (dest);
}
