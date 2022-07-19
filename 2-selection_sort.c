#include "sort.h"
/**
 * selection_sort - sorts an array of integers in ascending order using
 * the Selection sort algorithm
 * @array: pointer to the array to be sorted
 * @size: size of the array
 **/
void selection_sort(int *array, size_t size)
{
	size_t i, j, k, l;
	int n, flag;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			n = array[i];
			flag = 0;
			for (j = i; j < size ; j++)
			{
				if (array[j] < n)
				{
					l = j;
					n = array[j];
					flag = 1;
				}
			}
			if (flag == 1)
			{
				k = array[i];
				array[i] = array[l];
				array[l] = k;
				print_array(array, size);
			}
		}
	}
}
