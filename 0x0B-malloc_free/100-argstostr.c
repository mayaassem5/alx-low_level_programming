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
	int index = 0;
	char *ptr;
	int i = 0, len = 0, total_len = 0;

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

	ptr = malloc(sizeof(av) * total_len);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		while (av[i][len] != '\0')
		{
			ptr[index++] = av[i][len++];
		}
		ptr[index++] = '\n';
	}

	ptr[index] = '\0';


	return (ptr);
}
