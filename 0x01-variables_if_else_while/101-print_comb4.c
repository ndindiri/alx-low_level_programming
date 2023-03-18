#include <stdio.h>
/**
 * main - print all possible different combinations of 3 digits & separated by,
 * The two digits must be different
 * 012, 120, 102, 021, 201, 210 are considered the same combination
 * Return: should return 0
 */
int main(void)
{
	int nbr1 = 48;
	int nbr2, nbr3;
	int comb = 44;

	while (nbr1 <= 57)
	{
		nbr2 = nbr1 + 1;
		while (nbr2 <= 57)
		{
			nbr3 = nbr2 + 1;
			while (nbr3 <= 57)
			{
				putchar(nbr1);
				putchar(nbr2);
				putchar(nbr3);
				if (nbr1 != 55 || nbr2 != 56 || nbr3 != 57)
				{
					putchar(comb);
					putchar(32);
				}
				nbr3 += 1;
			}
			nbr2 += 1;
		}
		nbr1 += 1;
	}
	putchar('\n');

	return (0);
}
