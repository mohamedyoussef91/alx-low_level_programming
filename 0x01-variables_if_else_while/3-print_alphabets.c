#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print alphabet in lowercaase then in uppercase
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*prints a - z*/
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	/*prints A - Z*/
	while (CH <= 'Z')
	{
		putchar (CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
