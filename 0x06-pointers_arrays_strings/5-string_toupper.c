#include "main.h"

/**
 * string_toupper -  a function that changes all lowercase letters
 * of a string to uppercase
 * @s: input string to be checked
 * Return: should return a pointer.
 */

char *string_toupper(char *s)
{

	int letter = 0;

	while (*(s + letter))
	{
		if (*(s + letter) >= 'a' && *(s + letter) <= 'z')
			*(s + letter) -= 'a' - 'A';
		letter++;
	}
	return (s);
}
