#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character to c stdout
 * @c: The character to print
 * Return: 1 on success -1 if error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
