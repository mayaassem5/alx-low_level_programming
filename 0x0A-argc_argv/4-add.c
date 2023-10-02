#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	if (argc < 1)
	{
		printf("%d\n", 0);
	}
	if (isdigit(argc))
	{
		printf("%d\n", (atoi(argv[1]) + atoi(argv[2])));
	}

	printf("Error\n");
	return (0);
}
