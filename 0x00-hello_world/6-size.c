#include <stdio.h>
/**
 * main - A program that prints the size of various types on the computer it is compiled and run on
 * Return 0
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float g;

printf("Size of a char: %lubyte(s)\n", (unsigned long)sizeof(a));
printf("Size of int: %lubyte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %lubyte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %lubyte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %lubyte(s)\n", (unsigned long)sizeof(g));
return (0);
}
