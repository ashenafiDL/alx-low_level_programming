#include "main.h"

/**
 * is_palindrom - checks if a string is palindrom
 * @s: the input string
 * Return: 1 if s is palindrom 0 otherwise
 */
int is_palindrom(char *s)
{
	int len;

	len = _strlen_recursion(s);
	return (_strcmp(s, len - 1));
}

/**
 * _strlen_recursion - finds lenght of a string
 * @s: the input string
 * Return: the lenght of s
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
	return (1);
}

/**
 * _strcmp - checks palindrom
 * @s: the input string
 * @len: length of s
 * Return: 1 if s is palindrom 0 otherwise
 */
int _strcmp(char *s, int len)
{
	if (len < 1)
		return (1);
	if (*s == *(s + len))
		return (_strcmp(s + 1, len - 2));
	return (0);
}
