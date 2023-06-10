#include <stdio.h>

/**
 * main - Program that prints the name of this followed by a new line
 * All arguments should be printed, including the first one
 *Only print one argument per line, ending with a new line
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */



int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}

return (0);
}