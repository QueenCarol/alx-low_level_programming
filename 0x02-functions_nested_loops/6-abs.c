#include "main.h"
#include <stdio.h>

/**
 * _abs - function that prints the absolute value of an integer
 * @c: is the int will use for the argument of the function
 * Return: 0
 */
int _abs(int c)
{
	if (c > 0 || c == 0)

	{
		return (c);
	}

	else
		return (c * -1);
}