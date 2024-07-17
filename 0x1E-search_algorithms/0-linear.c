#include <stdio.h>
#include "search_algos.h"
/**
 * linear_search - Functions that searches for a value in an array of integers.
 * @array: pointer to the first element of the array to search
 * @size: number of element
 * @value: value to search for
 *
 * Return: -1 if array is NULL
 */

int linear_search(int *array, size_t size, int value)
{

	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array [%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
