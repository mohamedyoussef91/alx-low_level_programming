#include "main.h"

/**
 * main - print number 1 - 100 followed by a new line
 *	numbers that multiples of 3 print Fizz
 *	numbers that multiples of 5 print Buzz
 *	numbers that multiples of 3 and 5 print FizzBuzz
 *	each number and word to be seprated by space
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && !(num % 5 == 0))
		printf("Fizz");
		else if (num % 5 == 0 && !(num % 3 == 0))
		printf("Buzz");
		else if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", num);
		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
