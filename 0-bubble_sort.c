#include "sort.h"

/**
 * bubble_sort - sorts an array of integers using the Bubble sort algorithm
 * @array: array to sort
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, x;
	int aux;

	for (i = 0; i < size; i++)
	{
		for (x = 0; x < (size - 1); i++)
		{
			aux = array[x + 1];
			if (aux < array[x])
			{
				array[x + 1] = array[x];
				array[x] = aux;
				print_array(array, size);

			}
		}
	}
}
