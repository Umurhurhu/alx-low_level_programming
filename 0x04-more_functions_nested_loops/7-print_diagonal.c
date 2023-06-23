#include "main.h"
/**
 * print_diagonal - Print diagonal line
 * @n: Print diagonal line
 * Return: 0 (success)
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 1; j++)
			_putchar(' ');
	}
	_putchar('/');
	_putchar('\n');
}
