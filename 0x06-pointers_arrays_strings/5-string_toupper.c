#include "main.h"
/**
 * string_toupper - changes all lowercase letter of a string to uppercase
 * @str: The string to be changed.
 * Return: apointer to the changed string.
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		index++;
	}
	return (str);
}
