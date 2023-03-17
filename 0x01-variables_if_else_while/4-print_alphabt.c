#include <stdio.h>
/**
 * main - print the alphabet in lowercase, followed by a new line
 * You can only use the putchar
 * Return: should return 0
 */
int main(void)
{
	int lower = 'a';

	while (lower <= 'z')
	{
		if (lower == 'e' || lower == 'q')
		{
			lower += 1;
		}
		else
		{
			putchar(lower);
			lower += 1;
		}
	}
	putchar('\n');
	return (0);
}
