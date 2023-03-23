#include "main.h"

/**
  * print_most_numbers - a function that prints the numbers, from 0 to 9
  *followed by a new line.
  * Do not print 2 and 4
  * Return: must always return 0
  */
void print_most_numbers(void)
{
	int nbr;

	for (nbr = 0; nbr <= 9; nbr++)
	{
		if (nbr == 2 || nbr == 4)
		{
			continue;
		}
		else
		{
			_putchar(nbr + '0');
		}
	}

	_putchar('\n');
}
