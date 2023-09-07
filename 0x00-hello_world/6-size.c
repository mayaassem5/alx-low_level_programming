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
	printf("Size of a char:", sizeof(char), "\n");
	printf("Size of an int:", sizeof(int), "\n");
	printf("Size of a long int:", sizeof(int[10]), "\n");
	printf("Size of a long long int:", sizeof(int[30]), "\n");
	printf("Size of a float:", sizeof(float), "\n");
	return (0);
}
