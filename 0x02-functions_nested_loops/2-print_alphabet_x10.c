#include "main.h"

/**
 * main - prints alphabet 10 times
 *
 * Return: Always 0
 */
int print_alphabet_x10(void);
{
	int ten;
	char lo;

	for (ten = 0; ten <= 9; ten++)
		for (lo = 'a'; lo <= 'z'; lo++)
			_putchar(lo);
		putchar('\n');
		return (0);
}