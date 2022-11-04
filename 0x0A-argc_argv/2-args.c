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
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}

	return (0);
}
