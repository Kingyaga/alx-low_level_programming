#include "main.h"
/**
 * _isdigit - checks for digits.
 * @c : digit or not.
 * Return: 1 or 0.
 */
int _isdigit(int c)
{
	return (((c > 47 && c < 58)) ? 1 : 0);
}
