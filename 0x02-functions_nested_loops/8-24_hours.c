#include "main.h"
/**
 * jack_bauer -  prints every minute of the day of Jack Bauer
 */
void jack_bauer(void)
{
	int h = 0, m = 0;

	while (h != 24)
	{
		if (m > 59)
		{
			h++;
			m = 0;
		}
		if (h == 24)
			break;
		_putchar((h / 10) + 48);
		_putchar((h % 10) + 48);
		_putchar(':');
		_putchar((m / 10) + 48);
		_putchar((m % 10) + 48);
		_putchar('\n');
		m++;
	}
}
