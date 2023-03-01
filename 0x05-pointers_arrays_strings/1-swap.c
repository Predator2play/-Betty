#include "main.h"
/**
 *swap_int - Function that swaps values of two integers
 *@a: first interger input
 *@b: second interger input
 *Return: nothing
 */
void swap_int(int *a, int *b)
{
int z = *a;
*a = *b;
*b = z;
}
