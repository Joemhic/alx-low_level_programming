#include "main.h"

/**
 * _pow_recursion - function that return the value x raised to the power of y
 * @x: value of x to be raised
 * @y: power of
 * Return: result of the power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
