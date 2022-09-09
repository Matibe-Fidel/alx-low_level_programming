#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - alphabet
 *
 * Return: 0 is success
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z' ; a++)
{
	if (a != 'e' && a != 'q')
	{
	putchar(a);
	}
}

	putchar('\n');
	return (0);
}
