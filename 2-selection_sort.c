#include "sort.h"

/**
 * selection_sort - sorts array of integers using the Selection sort algorithm
 * @array: array to sort
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, x;
	int aux, index;
	int boolean;

	if (!array)
		return;
	for (i = 0; i < size - 1; i++)
	{
		boolean = 0;
		x = i + 1;
		aux = array[i];
		while (x < size)
		{
			if (array[x] < aux)
			{
				aux = array[x];
				index = x;
				boolean = 1;
			}
			x++;
		}
		if (boolean == 1)
		{
			array[index] = array[i];
			array[i] = aux;
			print_array(array, size);
		}
	}
}
