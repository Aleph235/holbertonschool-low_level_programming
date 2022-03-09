#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - returns the index of a given ineger
 * @array: int
 * @size: int
 * @cmp: int function
 *
 * Return: index of matched int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (0);

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]) != 0)
	{
		return (i);
	}
	else
		return (-1);
	}
	return (-1);
}
