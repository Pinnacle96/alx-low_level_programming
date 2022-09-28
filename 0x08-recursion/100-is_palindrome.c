#include "main.h"

/**
 * _strlen_recursion - length
 * @s: string
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * review_palindrome - checks if string is equal with length - i
 * @s: string
 * @length: length of s
 * Return: 1 if palind, 0 if not)
 */
int review_palindrome(char *s, int length)
{
	if (*s != *(s + length))
		return (0);
	else if (*s == 0)
		return (1);
	return (review_palindrome(s + 1, length - 2));
}

/**
 * is_palindrome - checks if the string is pal
 * @s: string
 * Return: 1 succes , -1 error
 */
int is_palindrome(char *s)
{
	int length;

	length = _strlen_recursion(s);
	return (review_palindrome(s, length - 1));
}
