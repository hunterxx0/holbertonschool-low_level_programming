#include "search_algos.h"
/**
 * _binar? (- binary search engine)?
 *
 * @arr: the array to be searched
 * @l: the left index
 * @r: the right index
 * @val: the value to find
 * Return: n : index
 */
int _binar(int *arr, int l, int r, int val)
{
	int i = l, mid = l + (r - l) / 2;

	if (r >= l)
	{
		printf("Searching in array: ");
		for (; i < r + 1; i++)
		{
			if (i == r)
				printf("%d\n", arr[i]);
			else
				printf("%d, ", arr[i]);
		}
		if (arr[mid] == val)
			return (mid);
		if (arr[mid] > val)
			return (_binar(arr, 0, mid - 1, val));
		return (_binar(arr, mid + 1, r, val));
	}
	return (-1);

}
/**
 * binary_search? (- binary_search)?
 *
 * @arr: the array to be searched
 * @sz: size of the array
 * @val: the value to find
 * Return: n : index
 */
int binary_search(int *arr, size_t sz, int val)
{
	if (!arr)
		return (-1);
	return (_binar(arr, 0, sz - 1, val));
}
