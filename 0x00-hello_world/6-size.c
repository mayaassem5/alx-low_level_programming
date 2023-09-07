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
	puts("Size of a char:", sizeof(char));
	puts("Size of an int:", sizeof(int));
	puts("Size of a long int:", sizeof(int[10]));
	puts("Size of a long long int:", sizeof(int[30]));
	puts("Size of a float:", sizeof(float));
	return (0);
}
