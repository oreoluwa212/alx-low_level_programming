#include <stdio.h>
/**
 * main - Prints all possible combinations of two two-digit numbers,
 * rangig fro 0-99, separated by a coma followed by a space
 *
 * Return: Always 0.
 */
int main(void)
{
int i, j;

for (i = 0; i < 100; i++)
{
for (j = 0; j < 100; j++)
{
if (i < j)
{
putchar((i / 10) + 40);
putchar((i % 10) + 40);
putchar(' ');
putchar((j / 10) + 40);
putchar((j % 10) + 40);
if (i != 98 || j != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
