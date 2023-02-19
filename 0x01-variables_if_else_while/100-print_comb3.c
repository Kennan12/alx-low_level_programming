#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a, k;

	for (a = '0'; a < '9'; a++)
	{
		for (k = a + 1; k <= '9'; k++)
		{
		if (k != a)
		{
			putchar(a);
			putchar(k);
			if (a == '8' && k == '9')
				continue;
			putchar(',');
			putchar(' ');
		}
		}
	}
	putchar('\n');
	return (0);
}
