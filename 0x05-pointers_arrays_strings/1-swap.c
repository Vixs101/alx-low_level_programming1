#include "main.h"

/**
 * swap_int - a function that swaps the value of two parameters
 * @a: parameter to be swapped
 * @b: parameter to be swapped
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
