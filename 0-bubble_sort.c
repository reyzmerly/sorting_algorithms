#include "sort.h"

/**
 * swap - this will be a function to swap the elements
 * @a: var to swap
 * @b: other var to swap
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/**
 * bubble_sort - This function will sort the array in ascending order
 * @array: passed array of integers
 * @size: will be the size of array
 *
 * Description: this will print the array after each swap
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	int flag = 0;

	if (array == NULL || size < 2)
	{
		return;
	}
	while (flag == 0)
	{
		flag = 1;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(array + i, array + i + 1);
				print_array(array, size);
				flag = 0;
			}
		}
		len--;
	}
}
