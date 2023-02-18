#include <stdio.h>
/**
 * main - Entry points
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char x;
	char y;

	x = 'a';
	y = 'A';

	while
		(x <= 'z') {
			putchar(x);
			x++;
		}
	while
		(y <= 'Z') {
			putchar(y);
			y++;
		}
	putchar('\n');
	return (0);
}
