#include <stdio.h>

/**
 * main - Prints combination of numbers
 *
 * Return: 0 (success)
 */
int main(void)
{
	int num1, num2;

	for (num1 = 48; num1 <= 56; num1++)
	{
		for (num2 = num1 + 1; num2 <= 57; num2++)
		{
			putchar((char)num1);
			putchar((char)num2);
			if (num1 != 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
		putchar('\n');
		return (0);
}
