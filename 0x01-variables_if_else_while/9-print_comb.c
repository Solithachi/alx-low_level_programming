#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: print numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
		if (d != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
