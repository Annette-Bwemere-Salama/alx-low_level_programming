#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
int intype;
char chartype;
long longtype;
long long int longinttype;
float floattype;

printf("Size of a chart: %li byte(s)\n", sizeof(chartype));
printf("Size of an int: %li byte(s)\n", sizeof(intype));
printf("Size of a long int: %li byte(s)\n", sizeof(longtype));
printf("Size of a long long int: %li byte(s)\n", sizeof(longinttype));
printf("Size of a float: %li byte(s)\n", sizeof(floattype));

return (0);
}
