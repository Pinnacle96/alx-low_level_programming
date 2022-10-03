#include "main.h"
#include <stdlib.h>


/**
 * _calculate_word_height - calculate height of array for then allocate memory
 * @str: str to evaluate and count words
 *
 * Return: word_height
 */
int _calculate_word_height(char *str)
{
	int i = 0, length = 0;
	int word_height = 0, flag_word = 0;

	/*First, calculate length: word +\n + \0 */
	while (str[i])
	{
		flag_word = 0;
		while (str[i] == ' ')
			i++;
		while (str[i] >= 33 && str[i] <= 126)
		{
			i++;
			length++;
			flag_word = 1;
		}
		/* we identify how many words (number of \n) & add space for \n */
		if (flag_word == 1)
		{
			length++;
			word_height++;
		}
	}
	if (word_height == 0)
		return (0);
	return (word_height + 1);
}

/**
 * strtow - create an array of word in a string
 * @str: string to evaluate
 * Return: bi-mensional array
 */

char **strtow(char *str)
{
	int i = 0, j = 0, k, l, word_height, word_width, flag_word = 0;
	char **arr;

	if (str == NULL || *str == '\0')
		return (NULL);
	word_height = _calculate_word_height(str);
	arr = malloc(sizeof(char *) * word_height);
	if (arr == 0 || word_height == 0)
		return (NULL);
	while (str[i])
	{
		flag_word = 0;
		while (str[i] == ' ')
			i++;
		word_width = 0;
		while (str[i + word_width] >= 33 && str[i + word_width] <= 126)
		{
			word_width++;
			flag_word = 1;
		}
		/* we identify how many words (number of \n) & add space for \n */
		if (flag_word == 1)
		{
			*(arr + j) = malloc((word_width + 1) * sizeof(char));
			if (*(arr + j) == NULL || word_width == 0)
			{
				for (k = 0; k <= i; k++)
					free(*(arr + k));
				free(arr);
				return (NULL);
			}
			/*creating the array*/
			for (l = 0; l < word_width; l++)
				arr[j][l] = str[i++];
			arr[j][l] = '\0';
			if (j <= word_height)
				j++;
		}
	}
	return (arr);
}
