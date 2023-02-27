#include "main.h"
/**
 *_abs - a function that computes absolute value of an integer
 *@n: The character displaying output
 *Return: Absolute value of num or zero
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
