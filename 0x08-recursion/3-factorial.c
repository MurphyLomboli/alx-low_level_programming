#include "main.h"

/**
 * factorial - gets the factorial of n
 * @n: integer
 * Return: On success 1
 * On error, -1 is then returned, otherwise the errno is set accordingly
 */
int factorial(int n)
{
	if (n < o)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
