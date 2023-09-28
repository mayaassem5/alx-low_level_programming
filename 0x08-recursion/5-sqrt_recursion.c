#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * Return: square root or -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n / _sqrt_recursion(n - 1) == _sqrt_recursion(n - 1))
	{
		return (_sqrt_recursion(n));
	}
}
