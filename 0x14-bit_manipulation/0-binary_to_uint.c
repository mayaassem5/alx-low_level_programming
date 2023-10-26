#include "main.h"
/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	int i, len = 0;
	unsigned int n = 0;

	if (b == NULL)
		return 0;

	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
			return 0;
		len++;
	}

	for (i = 0; i < len; i++)
	{
		n = n * 2 + (b[i] - '0');
	}

	return (n);
}
