#include "main.h"
/**
 * _islower - function that checks for lowercase character.
 * @c: The input character to check
 * Return: should Returns 1 if c is lowercase
 * Returns 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
