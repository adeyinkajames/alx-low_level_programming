#include <stdio.h>

/**
* main - prints all combination of a single digits
* Return: Always 0
*/
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n == 57)
		{
		break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
