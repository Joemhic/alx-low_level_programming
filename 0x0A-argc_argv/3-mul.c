#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 * @argc: counts arguement
 * @argv: arguement
 * Return: 0 for true, 1 if false
 */

int main(int argc, char *argv[])
{
	int j;
	int m;

	if (argc == 3)
	{
		j = atoi(argv[1]);
		m = atoi(argv[2]);

		printf("%d\n", j * m);
		return (0);
	}
	printf("Error\n");
	return (1);
}
