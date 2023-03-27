#include "main.h"

/**
 * _puts - a funtion that prints a string followed by a new line to stdout
 *@str: the string to print
 * Return: void
 */
void _puts(char *str)
{
	for (; *str != '\0' ; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
