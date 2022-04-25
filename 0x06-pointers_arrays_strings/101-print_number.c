#include "main.h"

/**
 * print_number - print a number using _putchar.
 * @n: the number to be printed.
 *
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar(45);
		i = -1;
	}
	if (i / 10)
	{
		print_number( 1 / 10 );
	}
	_putchar(i % 10 + '0');
}
