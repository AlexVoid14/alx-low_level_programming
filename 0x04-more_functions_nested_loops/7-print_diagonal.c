#include "main.h"
/**
 * print_diagonal - print diagonol line n times
 * @n: times diagonal line is printed
 * Return: no return
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j == i)
				_putchar('\\');
			else if (j < i)
				_putchar(' ');
		}
		_putchar('\n');
	}
}
