#include <stdio.h>

/**
 * main - wil print the alphabet in lowercase
 * followed by a ne line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		putchar(letters);
	}
	putchar('\n');
	return (0);
}
