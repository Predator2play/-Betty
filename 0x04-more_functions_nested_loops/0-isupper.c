#include "main.h"
/**
 *_isuper - check if letter is upper
 *@c: number to be checked
 *Return: 1 for upper or 0 for lower
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 98)
	{
		return (1);
	}
	return (0);
}
