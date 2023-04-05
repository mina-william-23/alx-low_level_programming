#include "main.h"
/**
 * _len - get length of string s
 * @s: string pointer
 * Return: length of string s
*/
int _len(char *s)
{
	int res = 0;

	if (*s)
		res = 1 + _len(s + 1);
	return (res);
}
/**
 * _check - logic of isplaindrom function
 * @s: string to check if palindrome
 * @len: length of string s
 * Return: result of check (1) is palindrom (0) not palindrome
*/
int _check(char *s, int len)
{
	if (len <= 1)
		return (1);
	else if (*s != *(s + len - 1))
		return (0);
	else
		return (_check(s + 1, len - 2));
}
/**
 * is_palindrome - check if string s is palidrome
 * @s: string pointer to check
 * Return: result of _check() 1 or 0
*/
int is_palindrome(char *s)
{
	return (_check(s, _len(s)));
}
