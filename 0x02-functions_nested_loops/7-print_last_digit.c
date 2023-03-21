#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number.
 * @nbr: The number in question.
 * Return:should return the value of the last digit.
 */
int print_last_digit(int nbr)
{
	nbr %= 10;
	if (nbr < 0)
	{
		nbr *= -1;
	}
	_putchar(nbr + '0');
	return (nbr);
}
