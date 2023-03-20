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
        char lower = 'a';
	char upper = 'A';

	for (lower = 'a'; lower <= 'z'; lower++)
		for (upper = 'A'; upper <= 'Z'; upper++)
			putchar(lower);
	putchar(upper);
	putchar('\n');
	retunr (0);
}
