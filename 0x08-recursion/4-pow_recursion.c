#include "main.h"

/**
 * _pow_recursion - relates x to the power of y
 * @x: the number integer
 * @y: The power
 * Return: On success 1
 * On error, -1 is then returned, otherwise the errno is set accordingly
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
