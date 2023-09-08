#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * This program will assign a random number to the
 * variable n each time it is executed.
 * It will print whether the number stored in the
 * variable n is positive or negative.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	/* Initialize random seed */
	srand(time(0));

	/* Generate a random number and store it in n */
	n = rand() - RAND_MAX / 2;

	/* Check if n is positive, negative, or zero, and print the result */
	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
	printf("%d is negative\n", n);
	}
	else
	{
	printf("%d is zero\n", n);
	}

	return (0);
}

