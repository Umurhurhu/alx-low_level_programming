#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'Z'; ch >= 'A'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
