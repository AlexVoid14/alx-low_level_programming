#include "main.h"
/**
 * _memset - fills memorywith a constant byte
 * @s: source string
 * @b: constant byte
 * @n: length of buffer
 * Return: new string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
