#include "main.h"
/**
 *void print_alphabet - A program that prints alphabets inlowercase
 *Return: void
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
