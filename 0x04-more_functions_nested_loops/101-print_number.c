#include "main.h"

/**
  * print_number - a function that prints an integer.
  * @n: input to check.
  * Return: should always retun 0.
  */
void print_number(int n)
{
	/*Base condition*/
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	/*Base case*/
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	/*Recursive case*/

	print_number(n / 10);

	/*Print last digit*/

	_putchar((n % 10) + '0');
}
