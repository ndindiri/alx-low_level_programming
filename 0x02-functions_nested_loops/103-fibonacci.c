#include <stdio.h>
/**
 * main - prints the sum of the even-valued terms, followed by a new line.
* starting with 1 and 2,
 * Return: nothing
 */
int main(void)
{
	int count = 0;
	long int fib1 = 1;
	long int fib2 = fib1;
	long int sum = fib1 + fib2;

	while (sum < 4000000)
	{
		if (sum % 2 == 0)
		{
			count += sum;
		}
		fib1 = fib2;
		fib2 = sum;
		sum = fib1 + fib2;
	}
	printf("%d\n", count);
	return (0);
}
