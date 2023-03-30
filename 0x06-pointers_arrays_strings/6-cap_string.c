#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string.
 * Separators of words: space, tabulation,
 * new line, ,, ;, ., !, ?, ", (, ), {, and }
 * @s: string to be capitalized.
 * Return: A pointer to the changed string.
 */
char *cap_string(char *s)
{
	int len = 0;

	while (s[len])
	{
		while (!(s[len] >= 'a' && str[len] <= 'z'))
			len++;

		if (s[len - 1] == ' ' ||
		    s[len - 1] == '\t' ||
		    s[len - 1] == '\n' ||
		    s[len - 1] == ',' ||
		    s[len - 1] == ';' ||
		    s[len - 1] == '.' ||
		    s[len - 1] == '!' ||
		    s[len - 1] == '?' ||
		    s[len - 1] == '"' ||
		    s[len - 1] == '(' ||
		    s[len - 1] == ')' ||
		    s[len - 1] == '{' ||
		    s[len - 1] == '}' ||
		    len == 0)
			s[len] -= 32;

		len++;
	}

	return (s);
}
