#include <stdio.h>
#include <stdlib.h>

#include <time.h>

/* more headers goes there */

/* betty style doc for function main goes there */
/**
*main - the main function
*Return: 0 is success
*/
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%d is zero\n", n);
	}

	return (0);

}

