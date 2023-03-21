#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Prints all natural numbers from input to 98,
 * Numbers must be separated by a comma followed by a space.
 * @nbr: The number to begin counting at.
 */
void print_to_98(int nbr)
{
	if (nbr < 98)
	{
		for (; nbr < 98; nbr++)
		{
			printf("%d, ", nbr);
		}
	}
	else if (nbr > 98)
	{
		for (; nbr > 98; nbr--)
		{
			printf("%d, ", nbr);
		}
	}
	if (nbr == 98)
	{
		printf("%d\n", nbr);
	}
}
