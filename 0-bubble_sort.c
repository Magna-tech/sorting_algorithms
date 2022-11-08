#include "sort.h"
#include <stdbool.h>

/**
 * bubble_sort -sorts an array of integers in ascending order using bubble sort
 * @array: the given array
 * @size: size of the given array
 *
 * Return: no value
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;
	bool swapped = false;

	do
	{
		swapped = false;
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - 1 - i; j++)
			{
				if (array[i] > array[i + 1])
				{
					temp = array[i];
					array[i] = array[i + 1];
					array[i + 1] = temp;
					swapped = true;
					print_array(array, size);
				}
			}
		}
	} while(swapped);
}
