#include "main.h"
#include <stdio.h>
/**
 * _puts - Print a function that print a string followed by new line
 * @str: Pointer to the string
 * Return: String and new line
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
