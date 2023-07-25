#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/* Comparison direction macros for bitonic sort */
#define UP 0
#define DOWN 1

/**
 * enum bool - Enumeration of Boolean values.
 * @false: Equals 0.
 * @true: Equals 1.
 */
typedef enum bool
{
	false = 0,
	true
} bool;

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* Printing helper functions */
/**
 * print_array - Print the elements of an array.
 * @array: Pointer to the array to print.
 * @size: The size of the array.
 *
 * Description: This function prints the elements of the given
 *integer array on a single line,
 * separated by a comma and space, and then prints a new line.
 */
void print_array(const int *array, size_t size);

/**
 * print_list - Print the elements of a linked list.
 * @list: Pointer to the head of the linked list to print.
 *
 * Description: This function prints the elements of the given
 *doubly linked list on a single line,
 * separated by a comma and space, and then prints a new line.
 */
void print_list(const listint_t *list);

/* Sorting algorithms */
/**
 * bubble_sort - Sort an array of integers in ascending order
 *using the bubble sort algorithm.
 * @array: Pointer to the array of integers to sort.
 * @size: The size of the array.
 *
 * Description: This function implements the bubble sort
 *algorithm to sort the given array
 * of integers in ascending order. The function prints the array
 *after each swap operation.
 */
void bubble_sort(int *array, size_t size);

/**
 * insertion_sort_list - Sort a doubly linked list of integers
 *in ascending order
 *                       using the insertion sort algorithm.
 * @list: Pointer to a pointer to the head of the doubly linked
 *list to sort.
 *
 * Description: This function implements the insertion sort
 *algorithm to sort the given
 * doubly linked list of integers in ascending order. The
 *function prints the list after
 * each swap operation.
 */
void insertion_sort_list(listint_t **list);

/**
 * selection_sort - Sort an array of integers in ascending
 *order using the selection sort algorithm.
 * @array: Pointer to the array of integers to sort.
 * @size: The size of the array.
 *
 * Description: This function implements the selection sort
 *algorithm to sort the given array
 * of integers in ascending order.
 */
void selection_sort(int *array, size_t size);

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
void quick_sort(int *array, size_t size);

#endif /* SORT_H */
