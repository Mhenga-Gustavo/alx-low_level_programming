#include<stdio.h>

/**
*main-fibonacci<3
*
*Purpose-nohardcode
*
*Return:(Success)
*/

intmain(void)
{
unsignedlonginti;
unsignedlongintbef=1;
unsignedlongintaft=2;
unsignedlongintl=1000000000;
unsignedlongintbef1;
unsignedlongintbef2;
unsignedlongintaft1;
unsignedlongintaft2;

printf("%lu",bef);

for(i=1;i<91;i++)
{
printf(",%lu",aft);
aft+=bef;
bef=aft-bef;
}

bef1=(bef/l);
bef2=(bef%l);
aft1=(aft/l);
aft2=(aft%l);

for(i=92;i<99;++i)
{
printf(",%lu",aft1+(aft2/l));
printf("%lu",aft2%l);
aft1=aft1+bef1;
bef1=aft1-bef1;
aft2=aft2+bef2;
bef2=aft2-bef2;
}
printf("\n");
return(0);
}

