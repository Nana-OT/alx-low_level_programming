#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int x;

	int y;

	for (x = 0; x < 10; x++)
	{
		putchar('0' + x);
	}
	for (y = 'a'; y <= 'f'; y++)
	{
		putchar(y);
	}
	putchar('\n');

	return (0);
}
