#include "main.h"
/**
 * _isalpha - checks for alphabetic characters
 * @c: The character to print
 * Return: 1 if true, otherwise return 0
 */

int _isalpha(int c)
{
	char i;

	if ((i >= 65 && i <= 97) || (i >= 97 && i <= 122))
	{
		return (1);
	}
	return (0);
}
