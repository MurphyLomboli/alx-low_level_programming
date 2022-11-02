#include "main.h"

/**
 * evaluate_num - recursion loop
 * @n: num (number)
 * @iterator: number to iterate
 * Return: On success 1
 * On error, 0 is then returned, otherwise the errno is set accordingly
 */
int evaluate_num(int n, int iterator)
{
	if (iterator == num - 1)
	{
		return (1);
	}
	else if (num % iterator == 0)
	{
		return (0);
	}
	if (num % iterator != 0)
	{
		return (evaluate_num(num, iterartor + 1));
	}

	return (0);
}
/**
 * is_prime_number - evaluates wether the number is a prime or not
 * @n: num (The number)
 * Return: On success 1
 * On error, 0 is then returned, otherwise the errno is set accordingly
 */
int is_prime_number(int n)
{
	int iterator;

	iterator = 2;

	if (num < 2)
	{
		return (0);
	}

	if (num == 2)
	{
		return (1);
	}
	return (evaluate_num(num, iterator));
}
