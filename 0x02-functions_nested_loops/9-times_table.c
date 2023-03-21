#include "main.h"

/**
 *times_table - prints the 9 times table
 *
 * Return:
 */

void times_table(void)
{
	int i, j, h;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
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
