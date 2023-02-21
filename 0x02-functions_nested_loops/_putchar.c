#include <unistd.h>
/**
 * _putchar - Write My C function
 * @c: Print character
 * Return: 0n success 1.
 * 0n error, -1 is returned, errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
