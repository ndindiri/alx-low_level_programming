#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints the numbers from 1 to 100
 * multiples of three print Fizz instead of the number and
 * for the multiples of five print Buzz
 * numbers which are multiples of both three and five print FizzBuzz
 * Return: should always return 0
 */
int main(void)
{
	int nbr;

	for (nbr = 1; nbr < 100; nbr++)
	{
		if (nbr % 3 == 0 && nbr % 5 == 0)
			printf("FizzBuzz ");
		else if (nbr % 3 == 0)
			printf("Fizz ");
		else if (nbr % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", nbr);
	}
	printf("Buzz\n");

	return (0);
}
