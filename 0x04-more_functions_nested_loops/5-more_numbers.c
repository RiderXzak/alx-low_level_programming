#include"main.h"
/**
 * more_numbers - print
 * Return:void
 */
void more_numbers(void)
{
	int repetitions = 10;
	int number, i, digit;

	for (i = 0; i < repetitions; i++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number > 9)
			{
				_putchar('1');
			}
			digit = number % 10;
			_putchar(digit + '0');
		}
		_putchar('\n');
	}
}
