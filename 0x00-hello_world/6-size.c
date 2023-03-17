#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 if successful
 */
int main(void)
{
printf("Size of a char: %2ld byte(s)\n", sizeof(char));
printf("Size of a int: %2ld byte(s)\n", sizeof(int));
printf("Size of a long int: %2ld byte(s)\n", sizeof(long int));
printf("Size of a long long int: %2ld byte(s)\n", sizeof(long long int));
printf("Size of a float: %2ld byte(s)\n", sizeof(float));
return (0);
}
