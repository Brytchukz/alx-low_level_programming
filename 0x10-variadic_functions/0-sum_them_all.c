#include "variadic_functions.h"
#include <stdarg.h>

/**
 * int sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 *
 * Return: sum of its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start (list, n);
	if (n != 0)

	for (i = 0; i < n; i++)
		sum += va_arg(list, unsigned int);

	va_end(list);

	return (sum);
}
