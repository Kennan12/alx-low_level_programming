#include "main.h"

/**
 * _memset - fills memor with constant byte
 * @s: memory area filled
 * @b: char to copy
 * @n: number of times to copy b
 * Return: pointer to yhe memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
