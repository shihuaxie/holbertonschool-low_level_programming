#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - print out the reserved lowercase alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 122; ch >= 97; ch--)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
