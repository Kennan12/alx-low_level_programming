#include "main.h"

/**
 * print_numbers - print numbers between 0 and 9
 * Returm: no return
 */
void print_numbers(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
