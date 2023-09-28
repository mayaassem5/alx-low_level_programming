#include "main.h"
/**
 * _sqrt_helper - returns the natural square root of a number.
 * @n: input number.
 * @divisor: iterator.
 * Return: square root or -1.
 */
int _sqrt_helper(int n, int divisor)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);

	if (divisor * divisor == n)
	{
		return (divisor);
	}
	else if (divisor * divisor > n)
	{
		return (-1);
	}

	return (_sqrt_helper(n, divisor + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * Return: natural square root.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 1));
}
