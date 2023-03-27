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
	int str = 0;

	while (src[str])
	{
		dest[str] = src[str];
		str++;
	}

	return (dest);
}
