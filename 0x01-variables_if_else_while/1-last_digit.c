#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int d;


	d = n % 10;
	if (d > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, d);
	}
	else if (d < 6 && d != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, d);
	}
	else
	{
		printf("Last digit of %d is %d and is 0", n, d);
	return (0);
}