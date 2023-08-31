#include "main.h"

/**
 * _sqrt_recursion - final natural Square root
 * @n: int
 * @val: Square root
 * Return: int
*/
int Square(int n, int val);
int _sqrt_recursion(int n)
{
	return (Square(n, 1));
}

/**
 * Square - find Square root
 * @n: int to find Square root
 * @val: Square root
 * Return: int
*/

int Square(int n, int val)
{

	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (Square(n, val + 1));
	else
		return (-1);

}
