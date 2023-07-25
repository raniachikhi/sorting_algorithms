#include "sort.h"

/**
 * swap_ints - Swap two integers.
 * @a: Pointer to the first integer to swap.
 * @b: Pointer to the second integer to swap.
 *
 * Description: This function swaps the values of two integers
 *pointed to by a and b.
 */
void swap_ints(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - Sorts an array of integers in ascending
 *order using the selection sort algorithm.
 * @array: Pointer to the array of integers to sort.
 * @size: The size of the array.
 *
 * Description: This function implements the selection sort
 *algorithm to sort the given array
 * of integers in ascending order. It prints the array after
 *each swap operation.
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = array + i;
		for (j = i + 1; j < size; j++)
			min = (array[j] < *min) ? (array + j) : min;
		if ((array + i) != min)
		{
			swap_ints(array + i, min);
			print_array(array, size);
		}
	}
}
