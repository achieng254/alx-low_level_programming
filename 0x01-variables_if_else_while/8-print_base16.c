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
	char hex_digit = '0';

	while (hex_digit <= 'f')
	{
	putchar(hex_digit);
	hex_digit++;

	if (hex_digit > '9' && hex_digit < 'g')
	{
	hex_digit = 'a';
	}
	}

	putchar('\n');

	return (0);
}
