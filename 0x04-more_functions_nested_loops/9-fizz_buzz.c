#include <stdio.h>
/**
 * main - Fizz-Buzz test
 *
 * Return: 0 on success
 */
int main(void)
{
	int start = 1, end = 100;

	while (start <= 100)
	{
		if (start % 3 == 0)
			printf("Fizz");
		if (start % 5 == 0)
			printf("Buzz");
		if (start % 3 != 0 && start % 5 != 0)
			printf("%d", start);
		putchar(start == end ? '\n' : ' ');
		start++;
	}
	return (0);
}
