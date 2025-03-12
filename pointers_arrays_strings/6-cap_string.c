#include "main.h"

/**
**cap_string - Capitalizes the words in string.
*@s: String to be changed
*
*Return: Capitalized string.
*/
char *cap_string(char *s)
{
	int i = 0;
	char x;

	while (s[i])
	{
		x = s[i - 1];
		if (s[i] >= 97 && s[i] <= 122)
		{
			if (x == ' ' || x == '\t' || x == '\n' || x == ',' || x == ';' || x == '.')
				s[i] -= 32;

			if (x == '!' || x == '?' || x == '(' || x == ')' || x == '{' || x == '}')
				s[i] -= 32;

			if (x == '"' || i == 0)
				s[i] -= 32;
		}
		i++;
	}
	return (s);
}
