#include "main.h"
/**
 * _strstr - first occurence of substring needle in the string haystack
 * @haystack: main str to examined
 * @needle: searched in haystack
 * Return:return 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *str1, *str2; /*Declaring vairables*/

	while (*haystack != '\0')
	{
		str1 = haystack; /*values*/
		str2 = needle;

		/*Star WILE*/
		while (*haystack != '\0' && *str2 != '\0' && haystack == *str2)
		{
			haystack++;
			str2++;
		}
		if (*str2 == '\0')
			return (str1);
		haystack = str1 + 1;
	}
	return (0);
}
