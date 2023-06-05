#include "main.h"

/**
 * set_string - a string that sets the value of a pointer to a char
 * @s: a pointer to another pointer
 * @to: pointer to char
 */

void set_string(char **s, char *to)
{
	*s = to;
}
