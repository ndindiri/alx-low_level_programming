#include <stdio.h>
/**
 * main -print all possible different combinations of two digits
 * Numbers must be separated by , followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Return: should return 0
 */
int main(void)
{
	int nbr1 = 48;
	int nbr2;
	int comb = 44;

	while (nbr1 <= 57)
	{
		nbr2 = nbr1 + 1;
		while (nbr2 <= 57)
		{
			putchar(nbr1);
			putchar(nbr2);
			if (nbr1 != 56 || nbr2 != 57)
			{
				putchar(comb);
				putchar(32);
			}
			nbr2 += 1;
		}
		nbr1 += 1;
	}
	putchar('\n');
	return (0);
}
