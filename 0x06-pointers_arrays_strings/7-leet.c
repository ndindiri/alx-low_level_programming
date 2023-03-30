#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
* Letters a and A should be replaced by 4
* Letters e and E should be replaced by 3
* Letters o and O should be replaced by 0
* Letters t and T should be replaced by 7
* Letters l and L should be replaced by 1
 * @str: string to be encoded.
 * Return: should return a string.
 */
char *leet(char *str)
{
	int str1 = 0, str2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[str1])
	{
		for (str2 = 0; str2 <= 7; str2++)
		{
			if (str[str1] == leet[str2] ||
			    str[str1] - 32 == leet[str2])
				str[str1] = str2 + '0';
		}

		str1++;
	}

	return (str);
}
