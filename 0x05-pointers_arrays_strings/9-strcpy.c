#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: string to copy in buffer .
 * @src: source of string to copy.
 * Return: should return the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int str;

	for (str = 0; src[str] != '\0'; str++)
	{
		dest[str] = src[str];
	}

	dest[str++] = '\0';

	return (dest);
}
