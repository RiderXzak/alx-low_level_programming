#include <stdio.h>
/**
 * main - A program to print size of various type of variables
 * Return 0 (Success)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %lu byte(s)\n", sizeof(a));
	printf("Size of a int: %lu byte(s)\n", sizeof(b));
	printf("Size of a long int: %lu byte(s)\n", sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(d));
	printf("Size of float: %lu byte(s)\n", sizeof(e));

	return (0);
}
