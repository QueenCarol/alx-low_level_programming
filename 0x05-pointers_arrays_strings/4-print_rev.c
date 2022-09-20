#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to reverse
 * Return: returns nothing
 */

void print_rev(char *s)
{
	int rev = strlen(s);

	while (rev--)
		putchar(*(s + rev));
	putchar(10);
}
