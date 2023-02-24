#include "main.h"
/**
 *void print_alphabet - A program that prints alphabets.
 *Return: 0 (success)
 */
void print_alphabet(void)
{
	int n = 97;

	while (n <= 122)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
