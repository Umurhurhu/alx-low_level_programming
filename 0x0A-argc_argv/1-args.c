#include <stdio.h>
#include "main.h"
/**
 * main - print the number of argument passed
 * @argc: number of argument
 * @agrv: array of argument
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
