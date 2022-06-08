#include "main.h"
/**
 * jack_bauer - print every minutes of the day of jack bauer
 *
 * Return: minutes
 */

void jack_bauer(void)
{
int hour,minute;
hour = 0;
while (hour < 24)
{
minute = 0;
while (minute < 60)
{
_putcchar((hour / 10) + '0');
_putchar((hour % 10) + '0');
_putchar(':');
_putchar((minute / 10) + '0');
_putchar((minute % 10) + '0');
_putchar('\n');
minute++;
}
hour++;
}
}
