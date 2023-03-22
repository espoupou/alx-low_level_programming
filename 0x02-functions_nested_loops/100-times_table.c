#include "main.h"

/**
 * print_times_table - prints the n times table
 *
 * @n: the number of time
 *
 * Return:
 */

void print_times_table(int n)
{
	int i, j, h;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{

			h = i * j;
			if (h < 10)
			{
				if (j != 0)
				{
					_putchar(' ');
				}
				_putchar('0' + h);
			}
			else
			{
				_putchar('0' + (h / 10));
				_putchar('0' + (h % 10));
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
