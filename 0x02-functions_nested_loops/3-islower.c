#include "main.h"
/**
* _islower - show 1 if the input is lowercase, another cases show 0
* @c: the character to be checked
* Return: 1 for lowercase or 0 for other cases
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
