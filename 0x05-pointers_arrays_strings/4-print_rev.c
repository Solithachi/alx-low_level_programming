#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a given string of characters in reverse
 * @s: string parameter to be reversed
 * Return: Returns nothing
 */
void print_rev(char *s)
{
	int i, j;
	int c = 0;

	for (i = 0; 1 ; i++)
	{
		if (s[i] == 0)
			break;
		c++;
	}
	for (j = c - 1; j >= 0; j--)
	{
		 _putchar("%c", s[j]);
	}
	 _putchar("\n");
}
