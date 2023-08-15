#include "main.h"

/**
* _islower - Entry point
* Description: checks for lowercase character,
* @c: the character to check
* Return: 1 if c is lowercase, 0 otherwise
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (0);
}
