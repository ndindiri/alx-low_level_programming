#include <stdio.h>
#include <ctype.h>
/**
 * main - print the alphabet in lowercase, followed by a new line
 * You can only use the putchar
 * Return: should return 0
 */
int main(void)
{
	int l = 'a';

	while (l <= 'z')

	{
		putchar(l);
		l += 1;
	}
	putchar('\n');
	return (0);
}
