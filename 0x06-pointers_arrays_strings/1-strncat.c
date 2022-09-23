#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @n: int used
 * @src: string
 * @dest: destination of the string
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int les = 0, j = 0;

	while (dest[les])
	{
		les++;
	}

	while (j < n && src[j])
	{
		dest[les] = src[j];
		less++;
		j++;
	}

	dest[les + n + 1] '\0';

	return (dest);
}
