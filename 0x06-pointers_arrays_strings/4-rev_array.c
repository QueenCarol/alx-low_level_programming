#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @n: number of elements of the array
 * @a: aray
 */

void reverse_array(int *a, int n)
{
	int car, index;

	for (index = n - 1; index > n / 2; index--)
	{
		car = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = car;
	}
}


