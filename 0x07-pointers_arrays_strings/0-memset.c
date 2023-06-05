#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: address of memory
 * @b: value
 * @n: number of bytes
 * Return: new values for bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
