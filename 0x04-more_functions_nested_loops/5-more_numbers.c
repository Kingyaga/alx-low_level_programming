#include "main.h"
/**
 * more_numbers - printing rubbish.
 * Return: void.
 */
void more_numbers(void)
{
	int i = 0, j;

	while (i < 10)
{
	j = 0;

	while (j <= 14)
{
	_putchar('0' + j);
	j++;
}
	i++;
}
	_putchar('\n');
}
