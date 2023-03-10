#include "main.h"

/**
 * _islower - Function prints lowercase
 *
 * @c: Parameter to print
 *
 * Return: 1 if lits's a lowercase
 * and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
