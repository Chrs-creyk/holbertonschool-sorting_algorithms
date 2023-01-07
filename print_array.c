#include "sort.h"

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */

void print_array(const int *array, size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
}
