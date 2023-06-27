#include "main.h"
/**
 * _strlen - A function that runs the size of a string
 * @s: length of a string
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}
