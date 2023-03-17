#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int n;
	int N;

	srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* your code goes there */
	N = n % 10;
	if (N > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, N);
	}
	else if (N == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, N);
	}
	else 
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, N);
	}	
	
	return (0);
}
