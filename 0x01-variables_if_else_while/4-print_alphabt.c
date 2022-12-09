#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints alphabet in lower case
 * followed by a new line, except q and e
 * Return: Always 0
 */
int main(void)
{
	ch la;

	for (la = 'a'; la <= 'z'; la++)
		if (la != 'e' && != 'q')
			putchar(la);
	putchar('\n');
	return (0);
}
