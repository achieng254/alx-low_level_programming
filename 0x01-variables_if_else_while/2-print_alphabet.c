#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints the alphabet in lowercase, followed by a new
 * line, using only the putchar function and with two putchar calls.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
	putchar(letter);
	letter++;
	}

	putchar('\n');

	return (0);
}
