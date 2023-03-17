#include <stdio.h>
/**
 * main - print all single digit numbers of base 10 starting from
 * You are not allowed to use any variable of type char
 * You can only use the putchar function
 * Return: should return 0
 */
int main(void)
{
	int nbr = 48;

	while (nbr <= 57)
	{
		putchar(nbr);
		nbr += 1;
	}
	putchar('\n');
	return (0);
}
