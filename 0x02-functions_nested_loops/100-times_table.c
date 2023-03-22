#include "main.h"
/**
 * print_times_table - function that adds two integers and returns the result.
 * @n: input to checkk
 * If n >= 15 || <= 0 the function should not print anything
 * Return: should return result
 */
void print_times_table(int n)
{
	int x, y, z;

	if (n >= 0 && n <= 14)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				z = x * y;

				if (z > 99)
				{
					_putchar(',');
					_putchar(32);
					_putchar((z / 100) + '0');
					_putchar(((z / 10) % 10) + '0');
					_putchar((z % 10) + '0');
				}
				else if (z > 9)
				{
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar(((z / 10) % 10) + '0');
					_putchar((z % 10) + '0');
				}
				else
				{
					if (y != 0)
					{
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar(32);
					}
					_putchar(z + '0');
				}
			}
			_putchar('\n');
		}}}
