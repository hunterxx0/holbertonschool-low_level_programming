#include "search_algos.h"
/**
 * linear_search? (- linear search)?
 *
 * @arr: the array to be searched
 * @sz: size of the array
 * @val: the value to find
 * Return: n : index
 */
int linear_search(int *arr, size_t sz, int val)
{
	size_t n = 0;

	if (!arr)
		return (-1);
	while (n < sz)
	{
		printf("Value checked array[%lu] = [%d]\n", n, arr[n]);
		if (arr[n] == val)
			return (n);
		n++;
	}
	return (-1);
}
