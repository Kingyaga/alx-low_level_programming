#include "main.h"
/**
 * _isupper - checks for the case of the alphabet.
 *
 * @c - checked character.
 *
 * Return: 1 if c is upper, 0 if c is lower.
 */
int _isupper(int c)
{
	return (((c > 96 && c < 123)) ? 0 : 1);
}
