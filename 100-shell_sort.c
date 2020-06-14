#include "sort.h"

/**
 * shell_sort - sorts an array of integers in ascending order
 * @array: array of integers
 * @size: size of the array
 * Return: nothing
 */
void shell_sort(int *array, size_t size)
{
	size_t i, j, gap;
	int temp;

	gap = size / 3 + 1;
	while (gap > 0)
	{
		j = 0;
		for (i = gap; i < size; i++)
		{
			temp = array[i];
			for (j = i; j >= gap && array[j - gap] > temp; j -= gap)
			{
				array[j] = array[j - gap];
			}
			array[j] = temp;
		}
		print_array(array, size);
		gap = gap / 3;
	}
}
