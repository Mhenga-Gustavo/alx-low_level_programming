#include <stdio.h>

/**
* main - Entry point
* Descriprion - 4-print_alphabt
* Return: Always 0 (Success)
*/
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
if (c != 'e' && c != 'q')
putchar(c);
}
putchar('\n');
return (0);
}
