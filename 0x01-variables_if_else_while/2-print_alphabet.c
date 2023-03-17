#include <stdio.h>
#include <ctype.h>
/**
 * main - print the alphabet in lowercase, followed by a new line
 * You can only use the putchar
 * Return: should return 0
 */
int main(void)
{
	int low = 'a';

	while (low <= 'z')

	{
		putchar(low);
		low += 1;
	}
	putchar('\n');
	return (0);
}
