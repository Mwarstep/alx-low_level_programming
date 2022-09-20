#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - will generate random valid passwords for the prog 101-crackme
 *
 * Return: 0 for a succesful program run.
 */

int main(void)
{
	int pass[100];
	int x, y, sum;

	sum = 0;
	srand(time(NULL));

	for (x = 0; x < 100 ; x++)
	{
		pass[x] = rand() % 78;
		sum += (pass[x] + '0');
		putchar(pass[x] + '0');

		if ((2772 - sum) - '0' < 78)
		{
			y = 2772 - sum - '0';
			sum += y;

			putchar(y + '0');
			break;
		}
	}
	return (0);
}
