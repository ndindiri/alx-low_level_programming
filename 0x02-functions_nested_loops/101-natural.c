#include <stdio.h>
/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024 (excluded)
 * Return: should return 0.
 */
int main(void)
{
	int nbr;
	int sum = 0;

	for (nbr = 0; nbr < 1024; nbr++)
	{
		if ((nbr % 3) == 0 || (nbr % 5) == 0)
		{
			sum += nbr;
		}
	}
	printf("%d\n", sum);
	return (0);
}
