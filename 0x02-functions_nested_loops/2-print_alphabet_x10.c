#include "main.h"
/**
 * print_alphabet_x10 - function that prints 10 times the alphabet,
 * Return: no value to return
 */
void print_alphabet_x10(void)
{
	int letter;
	int nbr = 0;

	while (nbr < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter += 1;
		}
		_putchar(10);
		nbr += 1;
	}
}
