#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * abs - check the code
 * @n: integer to make absolute
 * Return: int or int times negative
 */
int _abs(int n)
{
	if (n > 0)
		return (n);
	else
		return (n * -1);
}
