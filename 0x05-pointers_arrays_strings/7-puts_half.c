#include <stdio.h>
#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: string
 * Return: nothing 
 */

void puts_half(char *str)
{
	int i = 0;
	int j;

	while (*(str + i))
		i++;
	j = i / 2;

	if (i % 2)
		j += 1;
	while (j < i)
	{
		putchar(*(str + j));
		j++;
	}
	putchar('\n');
}
