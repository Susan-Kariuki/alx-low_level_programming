#include <stdio.h>
#include <time.h>

/**
 * main-prints if number is positive, zero or negative
 *
 * Return:always 0 (success)
 */
int main(void)
{	int n;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
