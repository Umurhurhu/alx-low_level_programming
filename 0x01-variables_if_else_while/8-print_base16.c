#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
	int e;
	char t;

	for (e = 48; e <= 57; e++)
	{
		putchar(e);
	}
	for (t = 'a'; t <= 'f'; t++)
	{
		putchar(t);
	}
	putchar('\n');
	return (0);
}
