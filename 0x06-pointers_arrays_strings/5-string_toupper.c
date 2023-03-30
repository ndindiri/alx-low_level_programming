#include "main.h"

/**
 * string_toupper -  a function that changes all lowercase letters
 * of a string to uppercase
 * @n: input string to be checked
 * Return: should return a pointer.
 */

char *string_toupper(char *n)
{
	int lett = 0;

	while (*(n + lett))
		if (*(n + lett) >= 'a' && *(n + lett) <= 'z')
			*(n + lett) -= 'a' - 'A';
	lett++;
	return (n);
}
