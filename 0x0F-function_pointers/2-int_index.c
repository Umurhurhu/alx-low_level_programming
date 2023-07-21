#include "function_pointers.h"
/**
 * int_index - earches for an integer
 * @size: size of array
 * @array: array to search
 * @cmp: pointer to the comparing function
 * Return: index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
