#include "main.h"
/**
 * _sqrt_recursion - recursion function for sqrt
 * @n: number to be squared
 * Return: number of occurrences
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - function for sqrt
 * @n: number to be squared
 * @i: number of occurrences
 * Return: number of occurrences
 */
int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	else if ((i * i) == n)
		return (i);
	else if ((i * i) > n)
		return (-1);

	i++;
	return (_sqrt(n, i));
}
/**
 * main - function
 * Return: 0
 */
int main(void)
{
	int r;

	r = _sqrt_recursion(1);
	printf("%d\n", r);
	r = _sqrt_recursion(1024);
	printf("%d\n", r);
	r = _sqrt_recursion(16);
	printf("%d\n", r);
	r = _sqrt_recursion(17);
	printf("%d\n", r);
	r = _sqrt_recursion(25);
	printf("%d\n", r);
	r = _sqrt_recursion(-1);
	printf("%d\n", r);
	return (0);
}


