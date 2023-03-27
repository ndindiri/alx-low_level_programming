#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array of integers,
 * followed by a new line.
 * where n is the number of elements of the array to be printed
 * Numbers must be separated by comma,and followed by a space
 * @a: input array
 * @n: input integer
 * Return: should always return 0
 */
void print_array(int *a, int n)
{
	int nbr;

	for (nbr = 0; nbr < n; nbr++)
	{
		printf("%d", a[nbr]);
		if (nbr < n - 1)
			printf(", ");
	}
	putchar('\n');
}
