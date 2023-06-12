#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function returns a pointer to a newly allocated space in memory
 * @str: char
 *
 * Return: 0
 */

char *_strdup(char *str)
{
	char *aaa;
	int j, m = 0;

	if (str == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
		j++;

	aaa = malloc(sizeof(char) * (j + 1));

	if (aaa == NULL)
		return (NULL);

	for (m = 0; str[m]; m++)
		aaa[m] = str[m];

	return (aaa);
}
