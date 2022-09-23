#include "main.h"

/**
 * _strncpy - function that copies a string
 * Your function should work exactly like strncpy
 * standard library provides a similar function: strncpy
 * @n: maximum number of copies
 * @src: string source
 * @dest: buffer sorting the string copy
 * Return: returns
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
