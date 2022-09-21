#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * _strlen - length of array
 * @arr: array
 * Return: length
 */
int _strlen(char *arr)
{
	int i = 0;

	while (arr[i])
	i++;
	return (i);
}

/**
 * reverse - reverse source and write it in dest
 * @dest: destiny
 * @source: source
 * @len: len of destiny
 * Return: pointer to dest
 */
char *reverse(char *dest, char *source, int len)
{
	int i = 0;

	while (--len >= 0)
	{
		dest[i++] = source[len];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * infinite_add - sum
 * @n1: number 1
 * @n2: number 2
 * @r: buffer to store result
 * @size_r: size of buffer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = _strlen(n1);
	int len2 = _strlen(n2);
	int maxlen = (len1 > len2) ? len1 : len2;
	char *rev1;
	char *rev2;
	char *rev_result;
	int i = 0, j = 0;
	int result = 0;
	int lleva = 0;

	rev1 = malloc(sizeof(char) * len1 + 1);
	if (rev1 == 0)
		return (0);
	rev2 = malloc(sizeof(char) * len2 + 1);
	if (rev2 == 0)
		return (0);
	rev_result = malloc(maxlen + 2);
	if (rev_result == 0)
		return (0);
	rev1 = reverse(rev1, n1, len1);
	rev2 = reverse(rev2, n2, len2);
	while (i < (maxlen + 2))
	{
		if (rev1[i] == '\0')
			rev1[i] = '0';
		if (rev2[i] == '\0')
			rev2[i] = '0';
		result = (rev1[i] - '0') + (rev2[i] - '0') + lleva;
		if (result == 0)
			break;
		lleva = result / 10;
		rev_result[i] = (result % 10) + '0';
		i++;
	}
	if (i > (size_r - 1))
		return (0);
	while (i >= 0)
		r[j++] = rev_result[--i];
	r[j] = '\0';
	return (r);
}
