#include "main.h"

/**
  * rot13- a function that encodes a string using rot13.
  * @s: input to be checked
  * Return: should return encodes string
  */
char *rot13(char *s)
{
	int str = 0;

	while (s[str])
	{
		while ((s[str] >= 'a' && s[str] <= 'z') || (s[str] >= 'A' && s[str] <= 'Z'))
		{
			if ((s[str] > 'm' && s[str] <= 'z') || (s[str] > 'M' && s[str] <= 'Z'))
			{
				s[str] -= 13;
				break;
			}

			s[str] += 13;
			break;
		}

		str++;
	}

	return (s);
}
