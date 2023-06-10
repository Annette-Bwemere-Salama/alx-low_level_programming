#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/*
* white the programm that multipy two numbers
*Your program should print the result of the multiplication, followed by a new line
*You can assume that the two numbers and result of the multiplication can be stored in an integer
*If the program does not receive two arguments, your program should print Error, 
*followed by a new line, and return 1
*
* @argc: argument
* @argv: argument
*/

int main(int argc, char *argv[])
{
    int num1,num2,product;
    if(argc != 3){
        printf("Error\n");
        return (1);
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);
    product = num1 * num2;

    printf("%d\n", product);
    return (0);
}
