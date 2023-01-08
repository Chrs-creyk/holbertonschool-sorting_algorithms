#include "sort.h"

/**
 * quick_sort - sorts an array in ascending order
 * implementation the partition scheme
 * and setting as pivot always the last element of the partition
 * once is ordered
 * @array: array to be sorted
 * @size: array size
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	quicksort(array, 0, size - 1, size);
}
