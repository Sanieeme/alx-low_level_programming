#include <stdio.h>

/**
 * main - a programme that prints size
 *
 * Return: 0 on success
 */

int main(void)
{
	char a;
	int i;
	long int l;
	long long int ll;
	float f;

printf("Size of a char: %lu byte(s)\n",
		(unsigned long)sizeof(a));
printf("size of an int: %lu byte(s)\n",
		(unsigned long)sizeof(i));
printf("Size of a long int: %lu byte(s)\n",
		(unsigned long)sizeof(l));
printf("Size of a long long int: %lu byte(s)\n",
		(unsigned long)sizeof(ll));
printf("Size of a float: %lu byte(s)\n",
		(unsigned long)sizeof(f));
return (0);
}
