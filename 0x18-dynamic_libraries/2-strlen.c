#include "main.h"

/**
 * _strlen - return the length of the string
 * @s: string to evvalute
 * Return: the lengrh of the string
 */
int _strlen(char *s)
{
	int k;

	k = 0;

	while (s[k] != '\0')
	{
		k++;
	}
	return (k);
}
