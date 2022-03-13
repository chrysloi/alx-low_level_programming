#include <stdio.h>

/**
 * main - to print single digit of base 10
 * using putchar
 * Return: always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
		putchar(n);
	putchar('\n');
	return (0);
} 
