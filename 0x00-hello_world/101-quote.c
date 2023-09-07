#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 *main - write ""
 *
 *void: has nothing
 *
 *Return: 1 always
 *
*/

int main(void)
{
	char *message = "and that piece of art is useful\"- Dora Korpar, 2015-10-19";
	ssize_t bytes_written = write(2, message, strlen(message));

	writeln(2, message);

	if (bytes_written == -1)
	{
		/* handle the error if write fails */
	}

	return (1);
}
