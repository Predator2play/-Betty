#include "main.h"
/**
 *_isdigit - function that checks digits
 *@c: intrger to be cchecked
 *Return: 1 if an integer 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
