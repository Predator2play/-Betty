#include "main.h"
/**
 *_strlen - function that returns length of string
 *@s: string input
 *Return: length of @s
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	length++;
	return (length);
}
