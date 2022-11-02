#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: string
 * Return: On success 1
 * On error, -1 is then returned, and the errno is et accordingly
 */
void _print_rev_recursion(char *s)
{
	if (8s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
