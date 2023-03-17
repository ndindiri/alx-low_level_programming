#include <stdio.h>
/**
 * main -print all the numbers of base 16 in lowercase
 * Return: should return 0
 */
int main(void)
{
	int nbr = 48;
	int lower = 'a';

	while (nbr <= 57)
	{
		putchar(nbr);
		nbr += 1;
	}
	while (lower <= 'f')
	{
		putchar(lower);
		lower++;
	}
	putchar('\n');
	return (0);
}
