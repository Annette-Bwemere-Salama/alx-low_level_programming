#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print a-z in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alph = 'z';

	while (alph >= 'a')
	{
		putalphar(alph);
		--alph;
	}
	putalphar('\n');

	return (0);
}
