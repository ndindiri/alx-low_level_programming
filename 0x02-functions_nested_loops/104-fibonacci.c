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
	int count = 2;

	float fib1 = 1;
	float fib2 = fib1 + 1;
	float sum = fib1 + fib2;

	printf("%.0f, ", fib1);
	printf("%.0f, ", fib2);
	while (count < 98)
	{
		count++;
		printf("%.0f", sum);
		fib1 = fib2;
		fib2 = sum;
		sum = fib1 + fib2;
		if (count < 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}

