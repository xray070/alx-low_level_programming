#include <stdio.h>
/**
 * main - prints all possible combination of single-digit numbers.
 * return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		if (num == 9)
			continue;
	putchar(',');
putchar(' ');

putchar('\n');
return (0);
}
