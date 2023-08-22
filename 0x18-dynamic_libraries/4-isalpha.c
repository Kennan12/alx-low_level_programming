#include "main.h"

/**
 * _isalpha - checks for alphabetic
 * @c: the character to be checked
 * Return: 1 if c is lower letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
