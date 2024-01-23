#include "sort.h"
#include <stdio.h>

/**
 * shell_sort - sorts an array of integers in
 * ascending order using Shell sort
 * @array: The array
 * @size: The size of the array
 */
void shell_sort(int *array, size_t size)
{
	size_t gap, x, y;
	int temp;

	for (gap = 1; gap < size / 3; gap = gap * 3 + 1)
		;
	for (; gap > 0; gap /= 3)
	{
		for (x = gap; x < size; x++)
		{
			temp = array[x];

			for (y = x; y >= gap && array[y - gap] > temp; y -= gap)
			{
				array[y] = array[y - gap];
			}

			array[y] = temp;
		}

		print_array(array, size);
	}
}
