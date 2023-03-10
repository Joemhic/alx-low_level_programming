#include "main.h"

/**
 * _abs - Checks absolute  value
 *
 * @q: Check paramter
 *
 * Return: always q
 */
int _abs(int q)
{
	if (q < 0)
		q = -(q);
	else if (q >= 0)
		q = q;
	return (q);
}
