#include "holberton.h"

/**
 * *_memset - concatenates two strings
 * @s:  pointer
 * @b: constant byte
 * @n: n bytes of memory
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{

	for (unsigned int i = 0; n > 0 ; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
