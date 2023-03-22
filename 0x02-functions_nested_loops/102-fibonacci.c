#include <stdio.h>
/**
 * main - a program that prints the first 50 Fibonacci numbers,
 *  starting with 1 and 2, followed by a new line.
 *  The numbers must be separated by comma, followed by a space ,
 * Return: should return  0.
 */
int main(void)
{
	int count = 2;
	long int fib1 = 1;
	long int fib2 = fib1 + 1;
	long int sum = fib1 + fib2;

	printf("%ld, %ld, ", fib1, fib2);

	while (count < 50)
	{
		printf("%ld", sum);
		count++;
		fib1 = fib2;
		fib2 = sum;
		sum = fib1 + fib2;

		if (count < 50)
		{
			printf(", ");
		}
	}
	printf("\n");

	return (0);
}
