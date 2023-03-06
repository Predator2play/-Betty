#include "main.h"
/**
 *_isupper - check if letter is upper
 *@c: number to be checked
 *Return: 1 for uppercase 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
