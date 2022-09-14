#include "main.h"
#include <ctype.h>

/**
 *print_last digit - main function
 *@n: integer to get the last digit of
 *Return last digit of n
 *
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	return ('0' + last_digit * 10 + last_digit);
}
