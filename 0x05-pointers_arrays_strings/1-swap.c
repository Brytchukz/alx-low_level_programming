#include "main.h"

/**
 * swap_int - swap the value of two integer a and b
 * @a: A pointer to an int that will be updated
 * @b: B pointer to an int that will be updated
 * Return: void that means our answer is correct
 */
void swap_int(int *a, int *b);
{
	int n;
	n = *a;
	*a = *b;
	*b = n;
}
