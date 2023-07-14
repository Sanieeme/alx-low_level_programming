#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - entry
 * Return: 0
 */

int main(void)
{
	int n;
	int o;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	o = n % 10;

	if (o > 5)
		printf("last digit of %d is and %d is greater than 5", n, o);

	else if (o == 0)
		printf("last digit of %d is and %d is 0", n, o);

	else if (o < 6 && !0)
		printf("last digit of %d and is %d less than 6 and is not 0", n, o);

	printf("\n");

	return (0);

}
