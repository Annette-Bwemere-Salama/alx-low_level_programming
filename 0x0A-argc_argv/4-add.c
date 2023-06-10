#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/*
*Print the result, followed by a new line
*If no number is passed to the program, print 0, followed by a new line
*If one of the number contains symbols that are not digits, print Error, followed by a new line, and return 1
*You can assume that numbers and the addition of all the numbers can be stored in an int
*
* @argc: number
 @argv: digits to
*
*/

int main(int argc, char *argv[])
{
    int i, j, sum = 0;

    for (i = 1; i < argc; i++)
    {
        for (j = 0; j < argv[i][j]; j++)
        {
            if (!isdigit(argv[i][j]))
            {
                printf("Error\n");
                return 1;
            }
        }
        sum += atoi(argv[i]);
    }

    printf("%d\n", sum);
    return (0);
}