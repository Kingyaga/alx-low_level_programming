#include "main.h"
/**
 * print_most_numbers - printing numbers.
 * Return: void.
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
{
	if (i != 2 && i != 4)

{
	_putchar(i + 48);
	i++;
}
}
	_putchar('\n');
}
