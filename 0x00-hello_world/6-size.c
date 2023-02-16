#include <stdio.h>
/**
 * main -print out sizes of data in C
 * * code by bewave ict
 * Return 0 (success)
 */

int main(void)
{
	char a;
	int b;
	long c;
	long long d;
	float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu bytes(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %lu bytes(s)\n", (unsigned int)sizeof(c));
printf("Size of a long long int: %lu bytes(s)\n", (unsigned int)sizeof(d));
printf("Size of a float: %lu bytes(s)\n", (unsigned int)sizeof(f));
return (0);
}
