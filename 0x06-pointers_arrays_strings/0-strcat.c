#include "main.h"

/**
 * _strcat - two strings concatenated
 * @dest: value to input
 * @src: value to input
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int j, m;

	j = 0;

	while (dest[j] != '\0')
	{
	j++;
	}

	m = 0;
	while (src[m] != '\0')
	{
	dest[j] = src[m];
	j++;
	m++;
	}

	dest[j] = '\0';
	return (dest);
}
