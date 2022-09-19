#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *@str: string to print the chars from
 */
void rev_string(char *s)
{
	int len, i;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		_putchar(str[i]);
	}
}
