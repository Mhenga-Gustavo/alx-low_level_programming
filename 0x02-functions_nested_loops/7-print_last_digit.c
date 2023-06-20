#include"main.h"

/**
*print_last_digit-printsthelastdigitofanumber
*@n:theinttoextractthelastdigitfrom
*Return:valueofthelastdigit
*/
intprint_last_digit(intn)
{
inta;

if(n<0)
n=-n;

a=n%10;

if(a<0)
a=-a;

_putchar(a+'0');

return(a);
}

