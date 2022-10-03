#include "main.h"
#include <stdlib.h>

/**
 * _strlen - length of string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: argc
 * @av: argv
 * Return: array of strings with \n
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, length = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	/*First, we calculate the length of new array + 1  counting \n */
	for (i = 0; i < ac; i++)
		length = _strlen(av[i]) + length + 1;
	/* we add +1 for \0 */
	str = malloc(sizeof(char) * (length + 1));
	if (str == 0)
		return (NULL);
	/*Second, create the new string*/
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			*(str + k) = av[i][j];
			k++;
		}
		*(str + k) = '\n';
		k++;
	}
	*(str + k) = '\0';
	return (str);
}
