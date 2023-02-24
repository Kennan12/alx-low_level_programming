
#include "main.h"
/**
 * print_most_numbers - print numbers from 0 or 9 except 2 and 4
 *
 * Return: nothing on success
 */
void print_most_numbers(void)
{
	int start = 0, end = 9;

	while (start <= end)
	{
		if (start != 2 && start != 4)
			_putchar(start + '0');
		start++;
	}
	_putchar('\n');
}
