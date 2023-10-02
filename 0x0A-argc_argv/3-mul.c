#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int mult;

	if (argc < 2)
	{
		printf("Error\n");
	}

	mult = argv[1] * argv[2];

	printf("%d\n", mult);

	return (0);
}
