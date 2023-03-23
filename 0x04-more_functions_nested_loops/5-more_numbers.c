#include "main.h"

/**
  * more_numbers - a function that prints 10 times the numbers, from 0 to 14,
  * followed by a new line. only use _putchar three times in your code
  * Return: must always return 0
  */
void more_numbers(void)
{
	int nbr1, nbr2;

	for (nbr1 = 0; nbr1 < 10; nbr1++)
	{
		for (nbr2 = 0; nbr2 <= 14; nbr2++)
		{
			if (nbr2 > 9)
			{
				_putchar((nbr2 / 10) + '0');
			}

			_putchar((nbr2 % 10) + '0');
		}

		_putchar('\n');
	}
}
