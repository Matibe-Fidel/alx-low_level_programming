#include "main.h"
#include "6-abs.c"


/**
 * print_last digit - main function
 *
 * @n: interger to get last sigit of
 * Return: last digit of
 *
 */

int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}
