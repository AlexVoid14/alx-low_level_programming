#include <stdio.h>
#include <time.h>
/**
 * main - prints lowercase aplhabet in reverse
 * Return: Always 0
 */
int main(void)
{
	char lo;

	for (lo = 'z'; lo >= 'a'; lo++)
		putchar(lo);
	putchar('\n');
	return (0);
}
