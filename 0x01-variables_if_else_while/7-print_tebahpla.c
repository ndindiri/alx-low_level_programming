#include <stdio.h>
/**
 * main - print the lowercase alphabet in reverse.
 * Return: should return 0
 */
int main(void)
{
	int nbr = 122;

	while (nbr > 96)
	{
		putchar(nbr);
		nbr -= 1;
	}
	putchar('\n');
	return (0);
}
