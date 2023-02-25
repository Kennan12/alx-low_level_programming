#include "main.h"
/**
 * print_triangle - prints a trainge.
 * @size: triangle size
 *
 * Return: nothing on success
 */
void print_triangle(int size)
{
	int start = 0, end = size, count;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (count = 0; count < end; count++)
		{
			while (start < end)
			{
				if ((start + count + 1) >= end)
					_putchar('#');
				else
					_putchar(' ');
				start++;
			}
			start = 0;
			_putchar('\n');
		}
	}
}
