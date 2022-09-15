#include "main.h"
#include <stdio>

/**
 * print_to_98 - function that prints all natural numbers from input to 98,
 * in order separated by a comma followed ba new line.
 * @n: num to begin counting at.
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
