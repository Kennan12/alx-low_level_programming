#include <stdio.h>

/**
 * main - Prints the sum of Even fibonacci numbers
 * less than 4000000.
 * Return: Nothing!
 */

int main(void)
{
	int a = 0;
	long b = 1, c = 2, sum = c;

	while (c + b < 4000000)
	{
	fib_
		c += b;
		if (c % 2 == 0)
			sum += c;
		b = c - b;
		++a;
	}
	printf("%ld\n", sum);
	return (0);
}
