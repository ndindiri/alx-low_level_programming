#include "main.h"

/**
* positive_or_negative -prints if integer is positive or negative
* @nbr: number to check
* Return: should return 0
*/

void positive_or_negative(int nbr)
{
	if (nbr < 0)
		printf("%d is negative\n", nbr);
	else
		printf("%d is positive\n", nbr);
}

