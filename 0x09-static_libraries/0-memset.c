#include "main.h"
/**
 * _memset - assigns memory block with value
 * @s: starting memory address
 * @b: resulting value
 * @n: number of bytes
 *
 * Return: new array of value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
