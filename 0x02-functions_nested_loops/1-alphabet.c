#include "main.h"

/**
 * main - Start of code
 * print_alphabet - prints lowercase alphabets
 * Return: 0
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
