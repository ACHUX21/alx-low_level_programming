#include "3-calc.h"
#include "stdlib.h"
/**
 * _strcmp - compare two strings
 * @s1: string 1
 * @s2: string 2
 * Return: Integer
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (1)
	{
		if (s1[i] > s2[i] || s2[i] > s1[i])
			return (s1[i] - s2[i]);
		if (s1[i] == '\0' && s2[i] == '\0')
		{
			return (0);
		}
		i++;
	}
}

/**
 * get_op_func -  the function that selects the correct
 * function to perform the operation asked by the user.
 * You’re not allowed to declare any other function.
 * @s: the name of the function
 * Return: integer
*/
int (*get_op_func(char *s))(int, int)
{
		op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	for (i = 0; i < 5 ; i++)
	{
		if (_strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
	}
	return (0);
}
