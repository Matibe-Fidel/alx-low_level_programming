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
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar(a);
		if (a != 9)
		{
			putchar(',');
			putchar(' ');

		}
	}
	putchar('\n');

	return (0);
}
