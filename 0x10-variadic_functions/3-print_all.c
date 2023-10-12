#include "variadic_functions.h"
#include <stdio.h>
#include <strdag.h>
/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	va_list args;

	char c = 'c', i = 'i', f = 'f';
	int x = 0, y = 0;
	char z[5];
	void *ptr;

	va_start(args, format);

	while (*format[x] != NULL)
	{
		if (*format[x] == c || *format[x] == i || *format[x] == f || *format[x] == 's')
			z[5] += *format[x];

		x++;
	}

	while (y < x)
	{
		ptr = va_arg(args,z[y]);


