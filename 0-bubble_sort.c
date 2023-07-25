#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: Pointer to the first integer to swap.
 * @b: Pointer to the second integer to swap.
 *
 * Description: This function swaps the values of two integers in an array.
 */
void swap_ints(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * print_array - Print the elements of an array.
 * @array: Pointer to the array to print.
 * @size: The size of the array.
 *
 * Description: This function prints the elements of the given
 *array on a single line,
 * separated by a comma and space, and then prints a new line.
 */
void print_array(const int *array, size_t size);

/**
 * bubble_sort - Sort an array of integers in ascending order
 *using bubble sort algorithm.
 * @array: Pointer to the array of integers to sort.
 * @size: The size of the array.
 *
 * Description: This function implements the bubble sort
 *algorithm to sort the given array
 * of integers in ascending order. The function prints the array
 *after each swap operation.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool swapped = false;

	if (array == NULL || size < 2)
		return;

	while (swapped == false)
	{
		swapped = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(&array[i], &array[i + 1]);
				print_array(array, size);
				swapped = false;
			}
		}
		len--;
	}
}
