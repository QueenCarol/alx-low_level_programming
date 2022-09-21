#include <stdio>
#include "main.h"

/**
 * *_strcat - function that concatenates two strings
 * @scr: string source
 * @dest: destination of string
 * Return:  pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int les = 0, i;

	while (dest[les])
	{
		les++;
	}

	for (i = 0; scr[i] != 0; i++)
	{
		dest[les] = scr[i];
		les++;
	}

	dest[les] = '\0';
	return (dest);
}

