#include "main.h"

/**
 * string_toupper -  a function that changes all lowercase letters
 * of a string to uppercase
 * @s: input string to be checked
 * Return: should return a pointer.
 */

char *string_toupper(char *s)
{

	int i;

i = 0;
	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
		i++;
	}
	return (s);
}
