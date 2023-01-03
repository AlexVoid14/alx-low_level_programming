#include "main.h"
/**
 * _strchr - Locates a character in a string
 * @s: string
 * @c: character to search
 * Return: Pointer to the first occurrence
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0') /*Declaring WHILE*/
	{
		if (*s == c) /*if s == c*/
		{
			return (s); /*return s*/
		}
		++s;
	}
	if (*s == c)
	{
		return (s);
	}

	return (0);/*value null*/
}
