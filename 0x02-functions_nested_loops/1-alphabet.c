#include "main.h"
/**
 *main - A program that prints alphabet in lowercase
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
