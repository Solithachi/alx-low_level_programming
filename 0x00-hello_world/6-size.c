#include <stdio.h>
/**
 * Main - prints the size of various types on the computer 
 * Return: returns the value 0 if exit properly, non-zero otherwise
 */
int main(void)
{
	int a;
	long long int c;
	char d;
	float f;
	long int b;
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0)
}
