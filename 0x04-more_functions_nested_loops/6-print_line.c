#include "main.h"
/**
 * print_line - Draws a straight line
 * @n: Draw a straight line
 * Return: 0 (success)
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
