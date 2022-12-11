#include <stdio.h>
/**
 * main - print combinations of two digits numbers
 * Return: Always 0
 */
int main(void)
{
	int tens;
	int ones;

	for (tens = 0; tens < 10; tens++)
		for (ones = tens; ones < 10; ones++)
			putchar(tens + '0');
	putchar(ones + '0');
	if (tens < 9)
		putchar(',');
	putchar(' ');
	putchar('\n');
	return (0);
}
