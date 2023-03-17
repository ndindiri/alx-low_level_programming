#include <stdio.h>
/**
 * main - print all single digit numbers of base 10 starting from 0
 * Return: should return 0
 */
int main(void)
{
	int nbr;

	while (nbr < 10)
	{
		printf("%d", nbr);
		nbr += 1;
	}
	printf("\n");
	return (0);
}
