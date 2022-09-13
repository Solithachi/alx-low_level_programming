#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * print_alphabet -> prints the lowercase alphabets
 * Return: Always success
 */
int print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	putchar('\n');
}
