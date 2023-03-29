#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: Array of integers to be reversed.
 * @n: Number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int cont1, cont2;

	for (cont1 = n - 1; cont1 >= n / 2; cont1--)
	{
		cont2 = a[n - 1 - cont1];
		a[n - 1 - cont1] = a[cont1];
		a[cont1] = cont2;
	}
}
