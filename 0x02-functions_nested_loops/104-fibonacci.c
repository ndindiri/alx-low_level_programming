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
	int counter = 2;

	float a = 1;
	float b = a + 1;
	float c = a + b;

	printf("%.0f, ", a);
	printf("%.0f, ", b);
	while (counter < 98)
	{
		counter++;
		printf("%.0f", c);
		a = b;
		b = c;
		c = a + b;
		if (counter < 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}

