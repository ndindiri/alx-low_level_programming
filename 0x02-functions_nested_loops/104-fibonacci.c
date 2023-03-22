#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *  should be separated by comma, followed by a space ,
* not allowed to use any other library (You can’t use GMP etc…)
* not allowed to use long long, malloc, pointers, arrays/tables, or structures
* not allowed to hard code any Fibonacci number (except for 1 and 2)
 * Return: should return 0
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int c = 0;
	int i = 0;

	printf("%d, %d, ", a, b);

	while (i < 96)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%d, ", c);
		i++;

		printf(", ");
	}
	printf("\n");

	return (0);
}
