#include "main.h"

/**
 * string_toupper - changes all lowercase to letters of a string to uppercase.
 * @s: strings to modify.
 *
 * Return: s modified.
 */

char *string_toupper(char *);
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] > 96 && s[i] < 123)
		{
			s[i] -= 32;
		}
		i++;
	}

	return (s);
}
