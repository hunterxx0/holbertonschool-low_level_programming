#include "search_algos.h"
/**
 * interpolation_search? (- interpolation search)?
 *
 * @arr: the array to be searched
 * @sz: the left index
 * @val: the value to find
 * Return: n : index
 */
int interpolation_search(int *arr, size_t sz, int val)
{
	int  low = 0, high = sz - 1;
	size_t mid = 0;

	if (!arr)
		return (-1);
	while ((arr[high] != arr[low]) && (val >= arr[low])
	       && (val <= arr[high]))
	{
		mid = low + (((double)(high - low) /
			      (arr[high] - arr[low])) *
			     (val - arr[low]));
		printf("Value checked array[%lu] = [%d]\n", mid, arr[mid]);
		if (arr[mid] < val)
			low = mid + 1;
		else if (val < arr[mid])
			high = mid - 1;
		else
			return (mid);
	}
	if (val == arr[low])
		return (low);
	else
		return (-1);
}
