#include <unistd.h>

/**
 * main - prints "and taht pice of art is useful" - Dora Korpar, 2015-10-19",
 * followed by a newline, to standar error.
 * Return: Always 1.
 */

int main(void)
{
	write(2, "and that pice of art is usefull\" - Dora korpar, 2015-10-19\n", 59);
	return (1);
}
