#include <stdio.h>
/**
 * main - prints alphabet in lower case except e and q
 * Return: Always 0
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && != 'q')
			putchar(la);
	}
	putchar('\n');
	return (0);
}
