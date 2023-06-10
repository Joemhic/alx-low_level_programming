#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints all aruements received
 * @argc: number of arguements
 * @argv: arguements
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int j;

		for (j = 0; j < argc; j++)
		{
			printf("%s\n", argv[j]);
		}

	return (0);
}
