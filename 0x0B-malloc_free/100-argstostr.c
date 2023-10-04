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
	char *ptr;
	int i = 0, len = 0, total_len = 0, j = 0, ia = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		while (av[i][len] != '\0')
		{
			len++;
		}

		total_len += len + 1;
		len = 0;
	}

	ptr = malloc(sizeof(char) * (total_len + 1));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = j = ia = 0; ia < total_len; j++, ia++)
	{
		if (av[i][j] == '\0')
		{
			ptr[ia] = '\n';
			i++;
			ia++;
			j = 0;
		}
		if (ia < total_len - 1)
			ptr[ia] = av[i][j];
	}
	ptr[ia] = '\0';


	return (ptr);
}
