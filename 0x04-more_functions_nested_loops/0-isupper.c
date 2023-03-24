#include "main.h"

/**
 *  _isupper - check if a letter is an uppercase letter
 *  @x: The letter to be checked
 *  Return: 1 for uppercase letters or 0 otherwise
 */

int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}
