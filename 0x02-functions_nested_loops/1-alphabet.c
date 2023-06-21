#include "main.h"
/**
 * main - Write a function that prints the alphabet in lowercases
 * Return: 0 (success)
 */

int main(void)

{
	char ch;

	for (ch = 'a'; ch >= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
