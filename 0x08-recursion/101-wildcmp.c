#include <stdio.h>
#include "main.h"
/**
 * checkWild - move to next direct *
 * @wild: string has wildcard *
 * Return: pointer to wild after moving to
 * last * before next normal char or \0
 */
char *checkWild(char *wild)
{
	if (*(wild + 1) == '*')
		checkWild(wild + 1);
	return (wild);
}
/**
 * wildcmp - compare two strings
 * one of them has wildcard *
 * @normal: nomral string
 * @wild: string has wildcard *
 * Return: 1 equal 0 not equal
 */
int wildcmp(char *normal, char *wild)
{

    /*  If we reach at the end of both strings, we are done */
	if (*wild == '\0' && *normal == '\0')
		return (1);

    /*  Make sure to eliminate consecutive '*' */
	if (*wild == '*')
		wild = checkWild(wild);

    /* Make sure that the characters after '*' are present */
    /* in second string. This function assumes that the */
    /* first string will not contain two consecutive '*' */
	if (*wild == '*' && *(wild + 1) != '\0' && *normal == '\0')
		return (0);

    /* If the first string contains '?', or current */
    /* characters of both strings match */
	if (*wild == *normal)
		return (wildcmp(normal + 1, wild + 1));

    /*  If there is *, then there are two possibilities */
    /*  a) We consider current character of second string */
    /*  b) We ignore current character of second string. */
	if (*wild == '*')
		return (wildcmp(normal, wild + 1) || wildcmp(normal + 1, wild));
	return (0);
}
