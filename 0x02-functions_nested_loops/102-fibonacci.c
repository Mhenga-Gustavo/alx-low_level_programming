#include<stdio.h>

/**
*main-Printsfirst50Fibonaccinumbers,startingwith1and2,
*separatedbyacommafollowedbyaspace.
*
*Return:Always0.
*/
intmain(void)
{
intcount;
unsignedlongfib1=0,fib2=1,sum;

for(count=0;count<50;count++)
{
sum=fib1+fib2;
printf("%lu",sum);

fib1=fib2;
fib2=sum;

if(count==49)
printf("\n");
else
printf(",");
}

return(0);
}

