#include "main.h"
/**
 *print_alphabet_x10 - A program that prints alphabets
 *Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	int m;
	int i;

	for (m = 1; m <= 10; m++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
