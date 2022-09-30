#include "main.h"

/**
 * _strchr - find the char in string
 * @s: string
 * @c: char
 * Return: pointer to the rest od string
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	char *p;

	if (s[i] == '\0')
		p = 0;
	while (s[i])
	{
		if (c == s[i])
		{
			p = s + i;
			break;
		}
		p = 0;
		i++;
	}
	if (c == '\0' && s[i] == '\0')
		p = s + i;
	return (p);
}
