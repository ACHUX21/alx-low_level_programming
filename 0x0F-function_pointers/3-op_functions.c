#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* op_add - add a & b
* @a: number1
* @b: number2
* Return: sum
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract a
 * @a: number1
 * @b: number2
 * Return: sum
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply a
 * @a: number1
 * @b: number2
 * Return: sum
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide a
 * @a: number1
 * @b: number2
 * Return: sum
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - mod
 * @a: number1
 * @b: number2
 * Return: sum
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
