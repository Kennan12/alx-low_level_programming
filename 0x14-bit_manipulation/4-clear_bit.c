#include "main.h"
#define BET_SIZE 8

/**
 * powX - powers a number b to the p's power
 * @b: base
 * @p: power
 * Return: return b to the power of a
 */
unsigned long int powX(int b, int p)
{
	unsigned long int ans = 1;

	while (p)
	{
		ans *= b;
		p--;
	}
	return (ans);
}

/**
 * clear_bit - sets bit to zero at index
 * @n: input integer
 * @index: returns the value of a bit at a given index
 * Return: 1 for sucess -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int test;

	if (index > sizeof(n) * BET_SIZE - 1)
		return (-1);
	test = powX(2, index);
	*n = (*n & test) ? *n ^ test : *n;
	return (1);
}
