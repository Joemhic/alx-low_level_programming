#include "main.h"

/**
 * print_last_digit - Functions prints last digit
 *
 * @j: Function parameter
 *
 * Return: m
 */
int print_last_digit(int j)
{
	int m;

	m = j % 10;
	if (j < 0)
		m = -m;
	_putchar(m + '0');
	return (m);
}
