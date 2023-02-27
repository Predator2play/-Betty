#include "main.h"
/**
 *_abs - a function that computes absolute value of an integer
 *@n: The character displaying output
 *Return: Absolute value of num or zero
 */
int _abs(int n)
{
	if (n < 0)
	{
		int abs_val;

		abs_val = n * -1;
		return (abs_val);
	}
	return (0);
}
