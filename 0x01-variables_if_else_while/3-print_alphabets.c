#include <stdio.h>

/**
 * main - prints alphabet in lower and upper case
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar (ch);

	for (ch = 'A'; ch <= 'z'; ch++)
		putchar(ch);

	putchar();

	return (0);
}
