#include "main.h"

/**
 * _strlen -  a function that returns the length of a string.
 * @s: Input to check
 * Return: should always return 0
 */
int _strlen(char *s)
{
	int lenght = 0;

	while (s[lenght] != '\0')
		lenght++;
	return (lenght);
}
