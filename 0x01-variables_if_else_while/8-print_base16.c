#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints all the numbers of base 16 in lowercase,
 * followed by a new line, using only the putchar function and
 * with three putchar calls.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
	putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
	putchar(i);
	}
	putchar('\n');
	return (0);
}
