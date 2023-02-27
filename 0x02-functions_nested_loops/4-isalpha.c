#include "main.h"
/**
 *_isalpha - A function that checks for alphabetic characters
 *@c: A character that displays value
 *Return: 1 for lowercase or uppercase 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
