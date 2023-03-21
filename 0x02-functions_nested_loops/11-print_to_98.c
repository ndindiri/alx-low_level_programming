#include <stdio.h>
/**
 * print_to_98 - Prints all natural numbers from input to 98,
 * Numbers must be separated by a comma followed by a space.
 * @nbr: The number to begin counting at.
 */
void print_to_98(int nbr)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d, ", n--);
		}
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
