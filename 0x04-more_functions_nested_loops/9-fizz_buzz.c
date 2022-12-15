#include "main.h"
#include <stdio.h>
/**
 * main - prints BUZZ each numbers of 3 and 5.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = 1;
	printf("%d", n);
	for (n = 2; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("FIZZBUZZ");
		}
		else if (n % 3 == 0)
		{
			printf("FIZZ");
		}
		else
		{
			printf("%d", n);
		}
	}
	printf("\n");
	return (0);
}
