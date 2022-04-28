#include "main.h"

/**
 * fractional - function that returns the fractional of agiven number
 * @n: integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
