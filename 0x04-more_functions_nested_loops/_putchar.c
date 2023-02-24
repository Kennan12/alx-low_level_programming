#include "main.h"
#include <unistd.h>
/**
 * _putchar - write a character c
 * @c: the character
 *
 * Return: on success 1.
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
