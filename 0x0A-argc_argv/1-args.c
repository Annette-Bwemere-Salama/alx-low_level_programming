#include <stdio.h>
#include "main.h"

/**
 * main - Program that prints the name of this followed by a new line
 * Do not remove the path before the name of the program
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}