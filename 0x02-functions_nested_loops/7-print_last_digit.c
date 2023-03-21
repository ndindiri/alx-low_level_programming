#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number.
 * @nbr: The number in question.
 * Return:should return the value of the last digit.
 */
int print_last_digit(int nbr)
{
	int last_digit = nbr % 10;

	if (last_digit < 0)
	{
		last_digit *= -1;
		_putchar(last_digit + '0');
		return (last_digit);
	}
}
