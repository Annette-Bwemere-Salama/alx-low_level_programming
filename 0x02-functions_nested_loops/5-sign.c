#include "main.h"
/**
 *print_sign - this print number is input is greater or less than zero
 *@n: thz argument
 *Return: always 0 success
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
