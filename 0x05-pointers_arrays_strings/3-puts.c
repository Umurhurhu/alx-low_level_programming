#include "main.h"
/**
 * _puts - Print a function that print a string followed by new line
 * @str: Pointer to the string
 * Return: String and new line
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
