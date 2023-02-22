#include "main.h"

/**
 * jack_bauer - prints time 4 hours
 *
 * Return: Always 0
 */
void jack_bauer(void)
{
	int j;
	int m;

	for (j = 0 ; j < 24 ; j++)
	{
		for (m = 0 ; m  < 60 ; m++)
		{
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar(':');
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			_putchar('\n');
		}
	}
}


