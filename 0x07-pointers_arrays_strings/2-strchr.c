#include "main.h"
#include <stddef.h>


/**
 * _strchr - locates the character
 * @s: the string we are looking through
 * @c: the character we are looking for
 * Return: a pointer to the char of NULL
 */
char *_strchr(char *s, char c)
{
	if (s == NULL)
		return (NULL);
	for (; *s; s++)
	{
		if (*s == c)
			return (s);
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
