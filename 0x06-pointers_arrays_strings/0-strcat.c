#include "main.h"
#include <stdio.h>
/**
 * _strcat - a function that concatenates two strings.
 * function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 * @dest: a pointer to the string to be concatenated.
 * @src: the source string to be appended.
 * Return: should return a pointer to the destination string dest
 */
char *_strcat(char *dest, char *src)
{
	int srcLn = 0, destLen = 0;

	while (dest[srcLn++])
		destLen++;

	for (srcLn = 0; src[srcLn]; srcLn++)
		dest[destLen++] = src[srcLn];

	return (dest);
}
