#include "main.h"

/**
 * _isupper - checks if parameter is upper case character.
 * @c: input character
 * Return: 1 if is an uppercase character, 0 in other case
 */
int _isupper(int c)
{
	if (c >= 65 && <= 90)
		return (1);
	else
		return (0);
}
