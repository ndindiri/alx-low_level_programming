#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 * @dest: the string to be appended upon.
 * @src: the string to be appended to dest.
 * @n: the number of bytes from src to be appended to dest.
 * Return: should return a pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int srcLn = 0, destLn = 0;

	while (dest[srcLn++])
		destLn++;

	for (srcLn = 0; src[srcLn] && srcLn < n; srcLn++)
		dest[destLn++] = src[srcLn];

	return (dest);
}
