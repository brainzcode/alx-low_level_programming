#include <stdio.h>
/**
 * main - program that prints numbers from 0 to 99.
 * Return: 0
 */

int main(void)
{
	int num = 0;

	while (num <= 99)
	{
		putchar(num / 10 + '0');
		putchar(num % 10 + '0');
		if (num != 99)
		{
			putchar(',');
			putchar(' ');
		}
		++num;
	}
putchar('\n');
return (0);
}
