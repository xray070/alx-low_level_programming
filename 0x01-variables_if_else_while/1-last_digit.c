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
			m =n % 10;
			if (n > 5)
			{
				printf("Last digit of %d is %d and is greater than 5\n", n, m);
			}
			else if (n == 0)
			{
				printf("Last digit of %d is %d and is 0\n", n, m);
			}
			if (m < 6 && m != 0)
			{
				printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
			}
			return (0);

}
