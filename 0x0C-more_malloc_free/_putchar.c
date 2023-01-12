#include "main.h"
#include <unistd.h>
/**
 * putchar - writes the character c to stdout
 * @c: character to print
 * Return: on success 1.
 * on error -1 to be returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
