#include <stdio.h>
/**
 * main - size of data types
 *
 * Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int;
	long long int;
	float e;

	printf("size of a char: %lu byte(s)\n", sizeof (a));
	printf("size of an int: %lu byte(s)\n", sizeof (b));
	printf("size of a long int: %lu byte(s)\n", sizeof (c));
	printf("size of a long long int: %lu byte(s)\n", sizeof (d));
	printf("size of a float: %lu byte(s)\n", sizeof (e));
	return (0);
}
