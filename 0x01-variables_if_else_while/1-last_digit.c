#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print if number is positive, zero or negative
 * Return: Always (Success)
 */

int main(void)

{
	int n;

			srand(time(0));

			n = rand() - RAND_MAX / 2;

			if (n > 5)
			{
				printf("Last digit of %d is and is greater than 5\n", n);
			}
			else if (n == 0)
			{
				printf("%d and is 0\n", n);
			}
			else
			{
				printf("Last digit of %d is 6\n", n);
			}
			return (0);

}
