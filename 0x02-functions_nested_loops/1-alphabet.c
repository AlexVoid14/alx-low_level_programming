#include "main.h"

/**
 * print_alphabet - prints the alpha in lowercase
 * Return: Always 0
 */
void print_alphabet(void)
{
	char lo;

	for (lo = 'a'; lo <= 'z'; lo++)
		_putchar(lo);

	_putchar('\n');

	return (0);
}
