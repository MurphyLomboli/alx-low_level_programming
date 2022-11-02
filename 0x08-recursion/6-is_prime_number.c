#include "main.h"

/**
 * is_divisible - checks if a number is divisible
 * @num: The number to be checked
 * @div: The divisor
 * Return: On success 0
 * On error, 1 is then returned, otherwise the errno is set accordingly
 */
int is_divisible(int num, int div);
int is_prime_number(int n);
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);
}
