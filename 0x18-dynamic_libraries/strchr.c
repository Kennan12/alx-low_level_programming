#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates a character in a string
 * @s: strin of search
 * @c: char to find
 * Return: a pointer to the first
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
