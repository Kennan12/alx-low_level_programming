#include <stdio.h>

/**
 * main - Prints the sum of all multiples of 3 or 5 up to 1024
 * Return: Always 0 (success)
 */
int main(void)
{
	int a, z = 0;

	while (a < 1024)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			z += a;
		}
		a++;
	}
	printf("%d\n", z);
	return (0);

