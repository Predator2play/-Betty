#include <stdio.h>
/**
 *main - A program that prints lowercase alphabets inreverse
 *Return: 0 (success)
 */
int main(void)
{
	int n;

	for (n = 122; n >= 97; n--)
	{
		putchar(n);

	}
	putchar('\n');
	return (0);
}
