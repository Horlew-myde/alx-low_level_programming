#include "main.h"
/**
 * times_table  - multiplication table
 *
 * Return: no return   Always (SUCCESS)
 *
*/
void times_table(void)
{
	int num1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int num2[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int a, b;
	int result;
	int firstnum
	int lastnum
	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			result = num1[i] * num2[j];
			first_digit = result / 10;
			last_digit = result % 10;
			result = num1[i] * num2[j];
			first_digit = result / 10;
			last_digit = result % 10;
			if (j != 0)if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (result < 10)
					_putchar(' ');
			}
			if (result < 10)
				_putchar('0' + result);
			else
			{
				_putchar('0' + first_digit);
				_putchar('0' + last_digit);
			}
		}
		_putchar('\n');
	}


}
