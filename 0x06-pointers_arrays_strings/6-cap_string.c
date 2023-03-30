#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string.
 * Separators of words: space, tabulation,
 * new line, ,, ;, ., !, ?,...
 * @str: string to be capitalized.
 * Return: should return a  pointer.
 */

char *cap_string(char *str)
{
	int i, j;

	i = 0;

	char a[] = " \t\n,;.!?\"(){}";

	while (*(str + i))
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
		{
			if (i == 0)
				*(str + i) -= 'a' - 'A';
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (a[j] == *(str + i - 1))
						*(str + i) -= 'a' - 'A';
				}
			}
		}
		i++;
	}
	return (str);
}
