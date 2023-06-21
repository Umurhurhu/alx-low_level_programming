#include "main.h"
/**
 * _isalpha - checks for alphabetic characters
 * @c: The character to print
 * Return: 1 if true, otherwise return 0
 */

int _isalpha(int c)
{

	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
