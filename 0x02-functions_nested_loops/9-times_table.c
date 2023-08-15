#include "main.h"
/**
 * times_table - Prints the 9 times table.
 */
void times_table(void)
{
int row, column;

for (row = 0; row <= 9; row++)
{
for (column = 0; column <= 9; column++)
{
int result = row * column;

if (column != 0)
_putchar('0');
if (result < 10 && column != 0)
_putchar(' ');
if (result < 10)
_putchar(' ');
else
_putchar(result / 10 + '0');
_putchar(' ');
putchar(result % 10 + '0');
}
_putchar('\n');
}
}
