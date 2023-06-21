#include "main.h"
/**
 * print_alphabet_x10 - A function that prints the alphabets repeatedly
 * Return: 0 (success)
 */

void print_alphabet_x10(void)

{
	char i, d;

	for (i = 0; i < 10; i++)
	{
		for (d = 0; d < 26; d++)
		{
			_putchar("abcdefghijklmnopqrstuvwxyz");
		}
		_putchar('\n');
	}
}
