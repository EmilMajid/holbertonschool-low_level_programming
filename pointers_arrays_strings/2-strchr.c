#include "main.h"
#include <stdio.h>
/**
*_strchr - Locates first occurence of a characther in a string.
*@s: The string to be searched
*@c: The character to be searched for
*
*Return: A pointer to the first occurence of character.
*/
char *_strchr(char *s, char c)
{
	int i;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	if (c == '\0')
	{
		return (&s[i]);
	}
return (NULL);
}
