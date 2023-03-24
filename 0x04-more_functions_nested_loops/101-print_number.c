#include "main.h"
#include <stdio.h>
/**
  * print_number - a function that prints an integer.
  * @n: input to check.
  * Return: should always retun 0.
  */

void print_number(int n)
{
	unsigned int nbr = n;

	if (n < 0)
	{
		_putchar('-');
		nbr = -nbr;
	}

	if ((nbr / 10) > 0)
		print_number(nbr / 10);

	_putchar((nbr % 10) + '0');
}
