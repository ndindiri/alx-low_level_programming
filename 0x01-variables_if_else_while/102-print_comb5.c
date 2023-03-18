#include <stdio.h>
/**
 * main - prints all possible combinations of two two digits
 * The numbers should range from 0 to 99
 * Numbers must be separated by ,followed by a space
 * All numbers should be printed with two digits. 1 should be printed as 01
 * Return: should return 0
 */
int main(void)
{
	int  nbr = 48;
	int fDigit = 0;
	int secDigit;
	int comb = 44;

	while (fDigit <= 99)
	{
		secDigit = fDigit + 1;

		while (secDigit <= 99)
		{
			putchar((fDigit / 10) + nbr);
			putchar((fDigit % 10) + nbr);
			putchar(32);
			putchar((secDigit / 10) + nbr);
			putchar((secDigit % 10) + nbr);
			if (fDigit != 98 || secDigit != 99)
			{
				putchar(comb);
				putchar(32);
			}
			secDigit += 1;
		}
		fDigit += 1;
	}
	putchar('\n');

	return (0);
}
