#include "main.h"

/**
 * _isdigit - check if numbers are from 0 - 9
 * @i: char to checked
 *
 * Return: 0 or 1
 */

int _isdigit(int i)
{
	if (i >= 0 && i <= 9)
		return (1);
	else
		return (0);
}
