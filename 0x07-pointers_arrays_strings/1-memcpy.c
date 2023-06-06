#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: stores saved memory
 * @src: where memory is copied
 * @n: number of bytes
 * Return: new number of bytes
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int m = n;

	for (; j < m; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
