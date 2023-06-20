#include"main.h"

/**
*jack_bauer-printseveryminuteofthedayofJackBauer
*startingfrom00:00to23:59
*/
voidjack_bauer(void)
{
inti,j;

i=0;

while(i<24)
{
j=0;
while(j<60)
{
_putchar((i/10)+'0');
_putchar((i%10)+'0');
_putchar(':');
_putchar((j/10)+'0');
_putchar((j%10)+'0');
_putchar('\n');
j++;
}
i++;
}
}

