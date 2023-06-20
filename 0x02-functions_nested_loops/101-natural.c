/*
*File:101-natural.c
*Auth:vincentkip
*/

#include<stdio.h>

/**
*main-Listsallthenaturalnumbersbelow1024(excluded)
*thataremultiplesof3or5.
*
*Return:Always0.
*/
intmain(void)
{
inti,sum=0;

for(i=0;i<1024;i++)
{
if((i%3)==0||(i%5)==0)
sum+=i;
}

printf("%d\n",sum);

return(0);
}

