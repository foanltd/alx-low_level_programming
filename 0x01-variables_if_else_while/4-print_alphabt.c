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
	char N = 'a';
	for (N = 'a'; N <= 'z'; N++)
	{
		if ( (N!='q') && (N!='e') )
		{
		putchar(N);
	}
	}
	       putchar('\n');
       return (0);
}       
