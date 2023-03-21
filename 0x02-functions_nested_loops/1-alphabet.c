#include "main.h"

/**
 * print_alphabet - function that prints alphabet in small letters
 *
 * Return: always 0 when successful
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
