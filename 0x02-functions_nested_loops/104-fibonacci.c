#include <stdio.h>

/**
 * main - program that finds and prints 
 * the first 98 Fibonacci numbers
 * starting with 1 and 2, followed by a new line.
 * Return: always 0
 */
int main(void)
{
	int num;
	unsigned long n1 = 0, n2 = 1, n3;

	for (num = 0; num < 98; num++)
	{
		n3 = n1 + n2;
		printf("%lu", n3);
		n1 = n2;
		n2 = n3;

		if (num == 97)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
