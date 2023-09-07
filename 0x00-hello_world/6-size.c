#include <stdio.h>

/**
 *main - puts "sizeof"
 *
 *void: has nothing
 *
 *Return: 0 always
 *
*/

int main(void)
{
	char x = 'h';
	int y = 1;
	int z = 20;
	long long int c = 72839382933;
	float b = 1.2;

	printf("Size of a char: %zu byte(s)\n", sizeof(x));
	printf("Size of an int: %zu byte(s)\n", sizeof(y));
	printf("Size of a long int: %zu byte(s)\n", sizeof(z));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(c));
	printf("Size of a float: %zu byte(s)\n", sizeof(b));
	return (0);
}
