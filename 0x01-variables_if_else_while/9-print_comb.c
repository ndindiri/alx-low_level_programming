#include <stdio.h>
/**
 * main -  program that prints all possible combinations of single-digit
 * Numbers must be separated by ,followed by a space
 * Numbers should be printed in ascending order
 * Return: should return 0
 */
int main(void)
{
	int nbr = 48;
	int comb = 44;

	while (nbr <= 57)
	{
		putchar(nbr);
		if (nbr != 57)
		{
			putchar(comb);
			putchar(32);
		}
		nbr += 1;
	}
	putchar('\n');
	return (0);
}
