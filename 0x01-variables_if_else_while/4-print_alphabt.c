#include <stdio.h>

/**
 * main - will print alphabet in lower
 * without e and q
 * return: always 0 (success)
 */
int main(void)
{
	char letters = 'a';

	while (letters <= 'z')
	{
		if (letters != 'e' && letters != 'q')
			putchar(letters);
		letters++;
	}
	putchar('\n');
	return (0);
}
