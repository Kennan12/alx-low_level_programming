#include "main.h"

/**
 * _strncat - concatenates n bytes from a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	j = 0;
	i = 0;

	while (dest[i] != '\0')
		i++;

	while (src[i] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
