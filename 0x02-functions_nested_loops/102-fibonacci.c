#include <stdio.h>
/**
 * main - a program that prints the first 50 Fibonacci numbers,
 *  starting with 1 and 2, followed by a new line.
 *  The numbers must be separated by comma, followed by a space ,
 * Return: should return  0.
 */
int main(void)
{
	int count, sum;
	unsigned long fib1 = 1;
	unsigned long fib2 = 2;

	for (count = 1; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);
		fib1 = fib2;
		fib2 = sum;
		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
