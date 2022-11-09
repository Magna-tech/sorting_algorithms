#include "sort.h"

void swap(int *a, int *b);
int partition(int *array, int first, int last, size_t size);
void rec_sort(int *array, int first, int last, size_t size);
/**
 * quick_sort - sort an array of ints using quick sort
 * @array: the given array
 * @size: size of the given array
 *
 * Return: no value
 */
void quick_sort(int *array, size_t size)
{
	rec_sort(array, 0, size - 1, size);
}

/**
 * swap - swaps the value of two variables
 * @a: first value
 * @b: second value
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * partition - partitions the given array into two
 * @array: given array
 * @first: first element of the array
 * @last: llast element of the array
 *
 * Return: the chosen partition value
 */
int partition(int *array, int first, int last, size_t size)
{
	int i = first, j, pivot;

	pivot = array[last];
	for (j = first; j < last; j++)
	{
		if (array[j] <= pivot)
		{
			swap(&array[i], &array[j]);
			i++;
		}
	}
	swap(&array[i], &array[last]);
	print_array(array, size);

	return (i);
}

/**
 * rec_sort - sorts the array recursively
 * @array: array to be sorted
 * @first: first beginning of the array
 * @last: last element of the array
 */
void rec_sort(int *array, int first, int last, size_t size)
{
	int index;

	if (first < last)
	{
		index = partition(array, first, last, size);
		rec_sort(array, first, index - 1, size);
		rec_sort(array, index + 1, last, size);
	}
}
