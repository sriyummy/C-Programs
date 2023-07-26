#include <stdio.h>
int main()
{

 int bs;
 float da, hra, gs;

 printf ("Enter basic salary: ");
 scanf ("%d", &bs);

 da = 0.5 * bs;
 hra = 0.2 * bs;
 gs = bs + da + hra;

 printf ("Gross salary: %f", gs);

 return 0;

}
