#include"main.h"
#include<unistd.h>
/**
*_putchar-writesthecharacterctostdout
*@c:Thecharactertoprint
*
*Return:Onsuccess1.
*Onerror,-1isreturned,anderrnoissetappropriately.
*/
int_putchar(charc)
{
return(write(1,&c,1));
}

