#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of a char: %zu byte(s)\n", sizeof(a));
	printf("size of a int: %zu byte(s)\n", sizeof(b));
	printf("size of a long int: %zu byte(s)\n", sizeof(c));
	printf("size of a long long in: %zu byte(s)\n", sizeof(d));
	printf("size of a float: %zu byte(s)\n", sizeof(f));
	return (0);
}
