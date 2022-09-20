#include "main.h"

/**
 * _strcpy - copy pastes string
 * @dest: destination
 * @src: source
 * Retuen: destination
 */

char *_strcpy(char *dest, char *src)
{
	int inc = 0;

	while (*(src +inc) != '\0')
	{
		*(dest + inc) = *(src + inc);
		inc++;
	}
	*(dest + inc) = '\0';

	return (dest);
}