#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all aplhabet letters
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= '2')
	{
		putchar(ch);
		ch++;
	}
	putchr('\n');

	return (0);
}
