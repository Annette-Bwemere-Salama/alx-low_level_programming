#include "main.h"

/**
 * print_alphabet_x10 - function that will print the alphabet 10 times
 *
 */

void print_alphabet_x10(void)
{
	int i, s;

	for (i = 0; i <= 9; ++i)
	{
		for (s = 'a'; s <= 'z'; ++s)
			_putchar(s);
		_putchar('\n');
	}
}
