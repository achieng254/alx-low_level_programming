#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints all possible combinations of single-digit numbers
 * separated by ", " in ascending order, using only the putchar function
 * and with a maximum of four putchar calls.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
	putchar(digit + '0');

	if (digit < 9)
	{
	putchar(',');
	putchar(' ');
	}

	digit++;
	}

	putchar('\n');

	return (0);
}
