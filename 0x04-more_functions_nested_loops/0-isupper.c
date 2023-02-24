#include "main.h"

/**
 * _isupper - uppercase latters
 * @x: char to check
 *
 * Return: 1 for upper letter or 0 for any else
 */

int _isupper(int x)
{
	if (x >= 'A' && x <= 'Z')
		return (1);
	else
		return (0);
}
