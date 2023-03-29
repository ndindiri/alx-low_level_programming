#include "main.h"

/**
 * print_rev - a function that reverses the content of an array of integers.
 * followed by a new line.
 * @s: an input string to check
 * Return: should return a string
 */
void print_rev(char *s)
{
	int strLn = 0;

	while (s[strLn] != '\0')
		strLn++;

	while (strLn)
		_putchar(s[--strLn]);

	_putchar('\n');
}
