#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: pointer of an array of char
 */
char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
		return (NULL);

	char *ptr;
	int i = 0, len = 0;

	while (av[len] != '\0')
		len++;


	ptr = malloc(sizeof(char) * len);

	if (ptr == NULL)
		return (NULL);

	while (i < ac)
	{
		ptr[i] = ((*av + i) + '\n');
		i++;
	}

	return (ptr);
}
