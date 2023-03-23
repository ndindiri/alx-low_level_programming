#include "main.h"

/**
  * print_numbers - a function that prints the numbers, from 0 to 9
  * followed by a new line.
  * Return: should always 0.
  */
void print_numbers(void)
{
	int nbr;

	for (nbr = 0; nbr <= 9; nbr++)
	{
		_putchar(nbr + '0');
	}

	_putchar('\n');
}
