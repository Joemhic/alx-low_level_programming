#include "main.h"
/**
 * print_alphabet - Function Prints Alphabets in Lowercase
 *
 * Return: ALways 0;
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a' ; a <= 'z' ; a++)
		_putchar(a);

	_putchar('\n');
}
