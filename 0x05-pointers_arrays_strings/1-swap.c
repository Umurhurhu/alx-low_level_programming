#include "main.h"
/**
 * swap_int - A function swaps the values of two integers
 * @a: First integer
 * @b: Second integer
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int change;

	change = *b;
		*b = *a;
		*a = change;
}
