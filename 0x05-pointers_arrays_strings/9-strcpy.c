#include "main.h"
/**
 * _strcpy - cpoies the string pointed and terminate null
 * @dest: is a destroy
 * @src: a copia
 * Return: return copy
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
