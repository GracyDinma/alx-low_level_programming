#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "search_algos.h"

/**
 * binary_search - functions that searches for a value in a sorted array
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: Index where value is located or -1 if array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	int beg = 0;
	int end = size - 1;
	int midIndex;
	int i;

	if (array == NULL || size == 0)
		return (-1);
	while (beg <= end)
	{
		midIndex = beg + (end - beg) / 2;
		printf("Searching in array: ");
		for (i = beg; i <= end; i++)
		{
			if (i == beg)
				printf("%d", array[i]);
			else
				printf(", %d", array[i]);
		}
		printf("\n");
		if (array[midIndex] == value)
		{
			return (midIndex);
		}
		else if (array[midIndex] < value)
		{
			beg = midIndex + 1; /* Search in the right half */
		}
		else
		{
			end = midIndex - 1; /* Search in the left half */
		}
	}
	return (-1); /* Return -1 if value not found */
}
