#include "main.h"

/**
 * print_array -  a function that prints n elements of an array of integers,
 * followed by a new line.
 * @a: name of array
 * @n:  number of elements of array to be printed
 * Return: a and n
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; i < (n - 1); j++)
	{
		printf("%d", a[j]);
	}
	if (j == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n"0);
}
