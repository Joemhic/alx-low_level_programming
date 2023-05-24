#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets in lowercase ten times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
