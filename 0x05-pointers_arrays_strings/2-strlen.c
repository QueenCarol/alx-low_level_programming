#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: is the integer we will use to identify the length
 * Return: returns the lenght os a string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}

