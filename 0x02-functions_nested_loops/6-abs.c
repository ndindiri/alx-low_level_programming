#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer.
 * @nbr: The input number to check
 * Return: The absolute value of the integer
 */
int _abs(int nbr)
{
	if (nbr >= 0)
	{
		return (nbr);
	}
	else
	{
		return (-nbr);
	}
}
