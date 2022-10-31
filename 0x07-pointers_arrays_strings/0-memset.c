include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area
 * @s: A pointer to the memory area to be filled
 * @b: The character to fill memory arear with
 * @n: The number of bytes to be filled
 * description _memset: over there
 * Return: A pointer to the filled memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
