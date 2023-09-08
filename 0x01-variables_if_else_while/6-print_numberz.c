#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints all single-digit numbers of base 10
 * starting from 0, followed by a new line, using only the
 * putchar function and with two putchar calls.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
	putchar(i + '0');
	i++;
	}

	putchar('\n');

	return (0);
}
