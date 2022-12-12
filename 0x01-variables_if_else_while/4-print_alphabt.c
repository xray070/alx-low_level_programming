#include <stdio.h>
#include <stdlib.h>
/**
 * main - alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')

	if ((ch != 'q') && (ch != 'e'))
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
