#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints the alphabet in lowercase, excluding the
 * letters 'q' and 'e', followed by a new line, using only the
 * putchar function and with two putchar calls.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
	if (letter != 'e' && letter != 'q')
	{
	putchar(letter);
	}
	letter++;
	}

	putchar('\n');

	return (0);
}
