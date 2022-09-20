#include <stdio.h>
#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string to be reversed
 * Return: nothing
 */

void rev_string(char *s)
{
	int i, tmp, rev = _strlen(s);

	for (i = 0; i < rev / 2; i++)
	{
		tmp = *(s + i);
		*(s + i) = *(s + rev - i - 1);
		*(s + rev - i - 1) = tmp;
	}
}

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: the length of the given string
 */

int _strlen(char *s)
{
	int rev = 0;

	while (*(s + rev) != '\0')
		rev++;

	return (rev);
}
