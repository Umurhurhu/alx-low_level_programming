#include "main.h"
/**
 * print_alphabet_x10 - A function that prints the alphabets repeatedly
 * Return: 0 (success)
 */

void print_alphabet_x10(void)

{
	char c, d;

	for (c = 0; c < 10; c++)
	{
		for (d = 0; d < 26; d++)
		{
			_putchar("%d", alphabet);
		}
		_putchar('\n');
	}
}
