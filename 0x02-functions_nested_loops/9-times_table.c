#include"main.h"

/**
*times_table-printsthe9timestable,startingwith0
*/
voidtimes_table(void)
{
inti,j,k;

for(i=0;i<10;i++)
{
for(j=0;j<10;j++)
{
k=j*i;
if(j==0)
{
_putchar(k+'0');
}

if(k<10&&j!=0)
{
_putchar(',');
_putchar('');
_putchar('');
_putchar(k+'0');
}elseif(k>=10)
{
_putchar(',');
_putchar('');
_putchar((k/10)+'0');
_putchar((k%10)+'0');
}
}
_putchar('\n');
}
}

