#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print 0, 1, - 9
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int nums = 0;

	while (nums <= 9)
	{
		putchar(nums + 48);

		if (nums != 9)
		{
			putchar(',');
			putchar(' ');
		}

		++nums;
	}
	putchar('\n');

	return (0);
}
