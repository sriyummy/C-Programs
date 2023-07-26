#include <stdio.h>
int main()
{
int a,b,sum,dif,mul,quo,rem;

printf ("Enter two numbers: );
scanf ("%d%d", &a, &b);

sum = a + b;
dif = a -b;
mul = a*b;
quo = a/b;
rem = a%b;

printf ("All results are (sum, difference, product, quotient, remainder): ");
printf (sum"\n");
printf (dif"\n");
printf (mul"\n");
printf (quo"\n);
printf (rem"\n");

return 0;
}
