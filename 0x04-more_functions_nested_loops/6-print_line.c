#include "main.h"

/**
 * print_line -> printing line
 * @n: integer params
 */
void print_line(int n);
{
	int X;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (X = 0; X < n; X++)
			_putchar(95);
		_putchar('\n');

	}
}
