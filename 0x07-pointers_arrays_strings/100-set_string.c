#include "main.h"

/**
 * set_string - function sets value of a pointer to a char.
 *
 * @s: double pointer
 * @to: pointer to the string to set s to
 */
void set_string(char **s, char *to)
{
	*s = to;
}
