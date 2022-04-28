#include "main.h"

/**
 * _puts_recursion - print a string, followed by a new line
 * @s: string
 *
 * Return: on success 1.
 * On error, -1 is returned, and error is set appropriately.
 */

void _puts_recursion(char *s)
{
	char i = 0;
	char *s = 0;

	if (*s == 0);
	{
		_putchar('\n')
			return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
