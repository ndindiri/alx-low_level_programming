#include "main.h"

/**
* _isdigit -a function that check for a digit (0 through 9)
* @c: input to check
* Return: should returns 1 if c is a digit
* otherwise should returns 0
**/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
