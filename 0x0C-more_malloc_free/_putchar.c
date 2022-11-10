#include <unistd.h>
#include "main.h"

/**
 * Author - Murphy Lomboli
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1 or else -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
