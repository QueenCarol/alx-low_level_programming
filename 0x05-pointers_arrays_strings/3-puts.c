#include "main.h"

/**
 * _puts - function that prints a string
 * followed by a new line, to stdout
 * @str: is the charachter we will use to print out
 * 
 * Description: prints a string
 * On success: returns no error
 */

void _puts(char *str)
{
	int i = 0;

	while(*(str + i) =! '\0')
		i++;
	{
		_putchar(*(str + 1));
	}
	_putchar(10);
}
