#include <stdio>

/**
 *main - prints the alphabet
 *
 *void: has nothing
 *
 *Return: 0 always
 *
*/

int main(void)
{
	for (char x = 'a'; x <= 'z'; x++)
	{
		while (x != 'e' && x != 'q')
		{
			putchar(x);
		}
	}
	return (0);
}
