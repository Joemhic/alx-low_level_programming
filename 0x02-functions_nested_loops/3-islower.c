#include "main.h"

/**
 * _islower - checks if char is in lowercase
 * @c: the char that is checked
 * Return: 1 if char is lowercase, else return 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
