#include <stdio.h>
#include "main.h"

/**
 * print_array - function that prints n elements
 * of an array of integers, followed by a new line
 * @a: array
 * @n: number of elements
 * Retuen: nothing
 */

void print_array(int *a, int n)
{
	int arr;

	for (arr = 0; arr < n; arr++)
	{
		if (arr != n - 1)
			printf("%d, ", a[arr]);
		else
			printf("%d", a[arr]);
	}
	putchar(10);
}
