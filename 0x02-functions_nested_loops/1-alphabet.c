#include "main.h"
/**
 *print_alphabet - print albabet in lowercase
 *Return: always zero (success)
 */
void print_alphabet(void)
{
	char _alpha;

	for (_alpha = 'a'; _alpha <= 'z'; _alpha++)
	{
		_putchar(_alpha);
	}
	_putchar('\n');
}
