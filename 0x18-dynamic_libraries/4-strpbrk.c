#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - prints consecutive characters that in s1 to s2
 * @s: source string
 * @accept: searching strings
 * Return: new string
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				break;
			}
		}
		if (*(accept + j) != '\0')
		{
			return (s + i);
		}
	}
	return (0);
}
