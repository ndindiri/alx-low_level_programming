#include "main.h"

/**
 * _strncpy - a function that copies a string.
 * Your function should work exactly like strncpy
 * @dest: storing the string copy.
 * @src: source of string.
 * @n: max number of the bytes to copied from src
 * Return: should return a pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int destLn = 0, srcLn = 0;

	while (src[destLn++])
		srcLn++;

	for (destLn = 0; src[destLn] && destLn < n; destLn++)
		dest[destLn] = src[destLn];

	for (destLn = srcLn; destLn < n; destLn++)
		dest[destLn] = '\0';

	return (dest);
}
