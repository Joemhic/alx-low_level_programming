#include "main.h"
/**
 * postive_or_negative - checks negative or positive numbers
 *
 * @i: the number to check
 *
 * Return: Always 0
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}
