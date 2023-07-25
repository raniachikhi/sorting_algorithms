#include "sort.h"

void swap_ints(int *a, int *b);
int lomuto_partition(int *array, size_t size, int left, int right);
void lomuto_quick_sort(int *array, size_t size, int left, int right);
void quick_sort(int *array, size_t size);

/**
 * swap_ints - Swap two integers in an array.
 * @a: Pointer to the first integer to swap.
 * @b: Pointer to the second integer to swap.
 *
 * Description: This function swaps the values of two integers pointed to by a and b.
 */
void swap_ints(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/**
 * lomuto_partition - Order a subset of an array of integers according to
 * the Lomuto partition scheme (last element as pivot).
 * @array: The array of integers.
 * @size: The size of the array.
 * @left: The starting index of the subset to order.
 * @right: The ending index of the subset to order.
 *
 * Return: The final partition index.
 *
 * Description: This function implements the Lomuto partition
 *scheme to order a subset
 * of the array of integers. It uses the last element as the
 *pivot and rearranges the
 * elements such that all elements less than the pivot are on
 * the left, and all elements
 * greater than or equal to the pivot are on the right. It
 *returns the final partition index.
 */
int lomuto_partition(int *array, size_t size, int left, int right)
{
	int *pivot, up, down;

	pivot = array + right;
	for (up = down = left; down < right; down++)
	{
		if (array[down] < *pivot)
		{
			if (up < down)
			{
				swap_ints(array + down, array + up);
				print_array(array, size);
			}
			up++;
		}
	}

	if (array[up] > *pivot)
	{
		swap_ints(array + up, pivot);
		print_array(array, size);
	}

	return up;
}

/**
 * lomuto_quick_sort - Implement the quicksort algorithm
 *through recursion.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 * @left: The starting index of the array partition to order.
 * @right: The ending index of the array partition to order.
 *
 * Description: This function uses the Lomuto partition scheme
 *to implement the quicksort
 * algorithm recursively. It sorts the array of integers in
 *ascending order and prints
 * the array after each swap of two elements.
 */
void lomuto_quick_sort(int *array, size_t size, int left, int right)
{
	int partition_index;

	if (right - left > 0)
	{
		partition_index = lomuto_partition(array, size, left, right);
		lomuto_quick_sort(array, size, left, partition_index - 1);
		lomuto_quick_sort(array, size, partition_index + 1, right);
	}
}

/**
 * quick_sort - Sort an array of integers in ascending
 *              order using the quicksort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: This function sorts the array of integers in
 *ascending order using
 * the quicksort algorithm with the Lomuto partition scheme.
 *It prints the array
 * after each swap of two elements.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	lomuto_quick_sort(array, size, 0, size - 1);
}
