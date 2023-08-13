#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all possible combinations of single-digit numbers
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + 4);

		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}

		digit++;
	}
	putchar('\n');

	return (0);
}
