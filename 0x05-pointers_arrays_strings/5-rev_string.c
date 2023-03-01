#include "main.h"
/**
 *rev_string - function that reverses a string
 *@s: String input
 *Return: always 0
 */
void rev_string(char *s)
{
	int a = 0, b = 0;
	char c;

	while (s[b++])
	{
		a++;
	}
	for (b = a -1; b >= a / 2; b--)
	{
		c = s[b];
		s[b] = s[a - b -1];
		s[a - b - 1] = c;
	}
}
