#include "main.h"
/**
 *reverse_array - reverse arrays of integers
 *@a: array
 *@n: number of elements in an array
 *Return: void
 */
void reverse_array(int *a, int n)
{
	int b;
	int v;

	for (b = 0; b < n--; b++)
	{
		v = a[b];
		a[b] = a[n];
		a[n] = v;
	}
}
