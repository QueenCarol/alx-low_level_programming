#include <stdio.h>
#include "main.h"

/**
 * puts_half - function that prints half of a string
 * followed by a new line
 * @str: string
 * Return: nothing
 */

void puts_half(char *str)
{
	int i - 0;

	while(*(str + i) != '\0)
	{
		if (i % 2 == 0)
			putchar (*(str + i));
		i++;
	}
	putchar(10);
}
