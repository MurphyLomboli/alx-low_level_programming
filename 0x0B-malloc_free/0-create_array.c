#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * Author - Murphy Lomboli
 * *create_array - creates the array of chars which are initialized with char
 * @size: the size of the array
 * @c: the char to be initiated with
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c);
{
	unsigned int position;
	char *buffer;

	if (size == 0)
		{
		return (NULL);
		}
	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
