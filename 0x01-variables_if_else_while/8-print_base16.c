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
	int B = 0;
	char N = 'a';

	for (B = 0; B < 10; B++)
		putchar('0' + B);
	for (N = 'a'; N <= 'f'; N++)
		putchar(N);
	putchar('\n');
}
