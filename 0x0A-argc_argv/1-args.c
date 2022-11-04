#include <stdio.h>
#include "main.h"

/**
 * main - prints the program name
 * @argc: counts the arguments
 * @argv: the arguments
 * Return: Always 0 (sucees)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}
