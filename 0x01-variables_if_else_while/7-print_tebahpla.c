#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints the lowercase alphabet in reverse,
 * followed by a new line, using only the putchar function
 * and with two putchar calls.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
	putchar(letter);
	letter--;
	}

	putchar('\n');

	return (0);
}
