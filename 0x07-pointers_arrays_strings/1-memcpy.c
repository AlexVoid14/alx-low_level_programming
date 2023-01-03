#include "main.h"
/**
 * _memcpy - fills memeory with another buffer
 * @dest: source of the string
 * @src: string to fill
 * @n: length of buffer
 * Return: new string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
