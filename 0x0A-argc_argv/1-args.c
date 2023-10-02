#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of arguments passed into it.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc , char *argv[])
{
	int i;
	int num = 0;
	for (i = 0; i < argc; i++)
	{
		num ++;
	}

	printf("%d\n", num);

	return (0);
}
