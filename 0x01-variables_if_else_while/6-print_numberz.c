#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int m;

	for (m = 0; m < 10; m++)
{
	putchar(m + '0');
}
	putchar('\n');

	return (0);
}
