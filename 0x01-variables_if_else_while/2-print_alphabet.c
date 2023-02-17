#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print lowercase alphabet
 * Return: 0
 */
int main(void)
{
	char lc;
	
	for (lc = 'a'; lc <= 'z'; lc++);
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
