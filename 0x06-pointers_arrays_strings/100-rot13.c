#include "main.h"

/**
 * rot13 - encodes + 13 char
 * @s: string to encode
 * Return: s
 */
char *rot13(char *s)
{
	int i = 0, j = 0;
	char source[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char encode[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i])
	{
		for (j = 0; source[j]; j++)
		{
			if (s[i] == source[j])
			{
				s[i] = encode[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
