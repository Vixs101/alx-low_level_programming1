#include "main.h"
/**
 * _abs -computes value of an integer
 * @e: parameter to be checked
 * Return: always 0 when successful
 */
int _abs(int e)
{
	if (e < 0)
		e = -(e);
	else if (e >= 0)
		e = e;
	return (e);
}
