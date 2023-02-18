#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print last digit of number
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

