#include "main.h"

/**
 * print_sign - prints the sign of the number
 * @n: the number of the sign to printed
 * Return: 1 if number greater than zero
 * 0 if number is zero
 * -1 if number less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
