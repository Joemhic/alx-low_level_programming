#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int j;
	int m;

	for (j = 0; j < n--; j++)
	{
		m = a[j];
		a[j] = a[n];
		a[n] = m;
	}
}
