#include<stdio.h>
#include"main.h"

/**
*print_to_98-printsallnaturalnumbersfromnto98,
*followedbyanewline
*@n:printfromthisnumber
*/
voidprint_to_98(intn)
{
inti,j;

if(n<=98)
{
for(i=n;i<=98;i++)
{
if(i!=98)
printf("%d,",i);
elseif(i==98)
printf("%d\n",i);
}
}elseif(n>=98)
{
for(j=n;j>=98;j--)
{
if(j!=98)
printf("%d,",j);
elseif(j==98)
printf("%d\n",j);
}
}
}

