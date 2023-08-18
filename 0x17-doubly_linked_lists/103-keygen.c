#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Generates and prints password for the crackme5 executable.
 * @argc: The number of argument supplied to the program
 * @argv: An array of pointer to the arguments.
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char password[7], *codex;
	int len = strlen(argv[1]), i, temp;

	codex = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjw6fxqZeF3Qa1rphdKouk";

	temp = (len ^ 59) & 63;
	password[0] = codex[temp];

	temp = 0;
	for (i = 0; i < len; i++)
		temp += argv[1][i];
	password[1] = codex[(temp ^ 79) & 63];

	temp = 1;
	for (i = 0; i < len; i++)
		temp *= argv[1][i];
	password[2] = codex[(temp ^ 85) & 63];

	temp = 0;
	for (i = 0; i < len; i++)
	{
		if (argv[1][i] > temp)
			temp = argv[1][i];
	}
	srand(temp ^ 14);
	password[3] = codex[rand() & 63];

	temp = 0;
	for (i = 0; i < len; i++)
		temp += (argv[1][i] * argv[1][i]);
	password[4] = codex[(temp ^ 239) & 63];

	for (i = 0; i < argv[1][0]; i++)
		temp = rand();
	password[5] = codex[(temp ^ 229) & 63];

	password[6] = '\0';
	printf("%s", password);
	return (0);
}
