#include "main.h"

/**
 * _puts - prints a string and a new line
 * @str: pointer to a string to print
 * Return: 0
 */

void _puts(char *str)
{
	int i;

	for (i = 0; 1 ; i++)
	{
		if (*(str + i) == 0)
		{
			_putchar("\n");
			break;
		}
		_putchar("%c", *(str + i));
	}
}
