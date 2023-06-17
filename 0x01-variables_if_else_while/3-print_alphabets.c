#include <stdio.h>
/**
 * main - Print alphabet in lowercase then uppercase
 *
 * Return: always (0)
 */

int main(void)
{
	char Lower = 'a';
	char Upper = 'A';

	while (Lower <= 'z')
	{
		putchar(Lower);
		Lower++;
	}

	while (Upper <= 'Z')
	{
		putchar(Upper);
		Upper++;
	}
	putchar('\n');
	return (0);
}
