#include "search_algos.h"
/**
 * arr_print? (- print array)?
 *
 * @arr: the array to be printed
 * @i: arr limit left
 * @r: arr limit right
 * Return:
 */
void arr_print(int *arr, int i, int r)
{
	printf("Searching in array: ");
	for (; i < r + 1; i++)
	{
		if (i == r)
			printf("%d\n", arr[i]);
		else
			printf("%d, ", arr[i]);
	}
}

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
		arr_print(arr, i, r);
		if (arr[mid] == val && arr[mid - 1] != val)
			return (mid);
		if (arr[mid] == val && arr[mid - 1] == val)
		{
			for (i = mid; arr[i] == val; i--)
				;
			return (_binar(arr, ++i, mid, val));
		}
		if (arr[mid] > val)
			return (_binar(arr, 0, mid - 1, val));
		return (_binar(arr, mid + 1, r, val));
	}
	return (-1);

}
/**
 * advanced_binary? (- advanced_binary)?
 *
 * @arr: the array to be searched
 * @sz: size of the array
 * @val: the value to find
 * Return: n : index
 */
int advanced_binary(int *arr, size_t sz, int val)
{
	if (!arr)
		return (-1);
	return (_binar(arr, 0, sz - 1, val));
}
