#include "main.h"
/**
 * Print_alphabet - prints alphabet in lowercase
 *
 * Return 0 (successful)
 */
void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar("\n");
}
