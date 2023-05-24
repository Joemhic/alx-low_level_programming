#include "main.h"

/**
 * main - main function
 * print_alphabet_x10 - prints lowercase alphabets ten times
 * Followed by a new line
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	for (int x = 0; x < 10; x++)
	{
		for (char alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
	}
}

int main(void)
{
	print_alphabet_x10();
	return (0);
}
