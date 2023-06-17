#include <stdio.h>
/**
 * main - Print alphabel without using char but only putchar
 *
 * Return: always (0)
 *
 */

int main(void)
{
	int alphabets = '0';

	while (alphabet <= '9')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
