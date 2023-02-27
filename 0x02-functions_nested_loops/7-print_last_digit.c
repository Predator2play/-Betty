#include "main.h"
/**
 *print_last_digit - A function that prints the last digit of a number
 *@n: A character that displays output
 *Return: Last digit
 */
int print_last_digit(int n)
{
	int m;

	m = n % 10;
	if (m < 0)
	{
		m = m * -1;
	}
	_putchar(m + 48);
	return (m);
}
