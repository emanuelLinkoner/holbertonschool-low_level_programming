#include "main."

/**
 * _memset - Entry point
 * @s: pointed destination
 * @b: constant byte
 * @n: bytez
 * Return: Always 0 (Succes)
 */
char *_menset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
