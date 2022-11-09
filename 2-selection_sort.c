#include "sort.h"

/**
 * selection_sort - sort ints using selectionsort
 * @array: given array
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t temp, i = 0, j;
	int first;

	while (i < size - 1)
	{
		first = array[i];
		for (j = i; j < size; j++)
		{
			if (array[j] < first)
			{
				first = array[j];
				temp = j;
			}
		}
		if (first != array[i])
		{
			array[temp] = array[i];
			array[i] = first;
			print_array(array, size);
		}
		i++;
	}
}
