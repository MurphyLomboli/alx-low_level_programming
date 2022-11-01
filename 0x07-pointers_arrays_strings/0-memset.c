include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area
 * @s: A string
 * @b: A character
 * @n: An integer
 * Return: A string (@s)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;

	return (s);
}
