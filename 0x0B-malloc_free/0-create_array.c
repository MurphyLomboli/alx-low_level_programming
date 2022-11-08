#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * Author - Murphy Lomboli
 * *create_array - creates an array for chars
 * @size: the size of the array
 * @c: the char to be initiated with
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int position;
	char *buffer;

	if (size == 0)
	{
		return (NULL);
	}

	buffer = (char *) malloc(size * sizeof(c));

	if (buffer == 0)
	{
		return (NULL);
	}

	else
	{
		position = 0;
		while (position < size)
		{
			*(buffer + position) = c;
			position++;
		}

		return (buffer);
	}
}
