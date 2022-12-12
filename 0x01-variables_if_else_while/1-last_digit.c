#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Generate num
 * Return: 0
 */
int main(void)
{
	int n;
	int k;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("last digit of %d is ", n);
	k = n % 10;
	if (k > 5)
	{
		printf("%d and is greater than 5\n", k);
	}
	else if ((k < 6) && (k < 0))
	{
		printf("%d and less than 6 and not 0\n", k);
	}
	else
	{
		printf("%d and is 0\n", k);
	}
	return (0);
}
