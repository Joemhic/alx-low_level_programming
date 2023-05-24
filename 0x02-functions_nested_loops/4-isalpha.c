#include "main.h"

/**
 * _isalpha - cheks for alphabets
 * @c: the char that is checked
 * Return: 1 is c is an alphabet else return 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
