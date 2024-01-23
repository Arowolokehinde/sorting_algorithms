#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in ascending order
 * @array: The array that is to be sorted
 * @size: The size of the array
 * Return: The arrays sorted
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int temp, sort;

	if (!array || size == 0)
		return;

	do {
		sort = 1;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				sort = 0;
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}

	} while (sort == 0);
}
