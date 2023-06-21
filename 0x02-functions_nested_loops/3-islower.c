#include "main.h"
/**
 * _islower - check for lower cases
 * @c: The characters to check for lower cases
 * Return: 1 if true, otherwise return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
