#include "main.h"

/**
 * _islower - Cheks for lowercase character
 * @c: The character to be cheked
 * Return: 1 for Lowercase character or 0 for anithing else
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{

	return (1);
	}
	return (0);
}
