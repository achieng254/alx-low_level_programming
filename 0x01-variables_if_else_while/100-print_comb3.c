#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints all possible different combinations of two digits
 * in ascending order, separated by ", ", using only the putchar function
 * and with a maximum of five putchar calls.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit1, digit2;

	digit1 = 0;

	while (digit1 <= 8)
	{
	digit2 = digit1 + 1;

	while (digit2 <= 9)
	{
	putchar(digit1 + '0');
	putchar(digit2 + '0');

	if (digit1 < 8)
	{
	putchar(',');
	putchar(' ');
	}

	digit2++;
	}

	digit1++;
	}

	putchar('\n');

	return (0);
}

