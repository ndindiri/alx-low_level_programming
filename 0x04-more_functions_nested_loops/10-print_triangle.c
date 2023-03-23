#include "main.h"

/**
 * print_triangle - a function that prints a triangle, followed by a new line.
 * can only use _putchar function to print
 * @size: is the size of the triangle
 * If size is 0 or less, the function should print only a new line
 * Use the character # to print the triangle
 * Return: should return always 0.
 */

void print_triangle(int size)
{
	int I;
	int j;
	int nbr = size - 1;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < nbr)
					_putchar(' ');
				else
					_putchar('#');
			}
			nbr--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
