#include "main.h"

/**
 * set_string - sets the value of a pointer s to a (to)
 * @s: address of pointer
 * @to: address of value
 */
void set_string(char **s, char *to)
{
	*s = to;
}
