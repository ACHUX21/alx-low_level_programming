#include "main.h"
/**
 * len - Calculates the length of a string recursively.
 * @s: The string to calculate the length.
 * @x: The current length.
 *
 * Return: The length of the string.
 */
int len(char *s, int x)
{
	if (*s == '\0')
		return (x);
	return (len(s + 1, x + 1));
}
/**
 * palindrome - Checks if a string is a palindrome recursively.
 * @s: The string to check.
 * @x: The current index to compare.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int palindrome(char *s, int x)
{
	int j = len(s, 0);

	if (x >= (j - x))
		return (1);
	if (*(s + x) != *(s + j - x - 1))
		return (0);

	return (palindrome(s, x + 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	return (palindrome(s, 0));
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = is_palindrome("level");
	printf("%d\n", r);
	r = is_palindrome("redder");
	printf("%d\n", r);
	r = is_palindrome("test");
	printf("%d\n", r);
	r = is_palindrome("step on no pets");
	printf("%d\n", r);
	return (0);
}