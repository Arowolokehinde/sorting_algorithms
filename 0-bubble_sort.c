#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in ascending order
 * @array: The array that is to be sorted
 * @size: The size of the array
 * Return: The arrays sorted
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, temp;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
