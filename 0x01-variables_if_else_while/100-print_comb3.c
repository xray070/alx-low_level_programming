#include <stdio.h>
/**
 * main - Pritall possiable combinmation of two diffierent digits
 * Return: 0
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 < 9; digit1++)
	{
	for (digit2 = 0; digit1 < 9; digit2 < 10; digit2++
			{
			putchar((digit2 % 10) + '0');
			putchar((digit2 % 10) + '0');
		if (digit1 == 8 && digit2 == 9)

		continue;

		putchar (',')
		putchar(' ')
		}
		}
		putchar('\n')
		return (0);
}
