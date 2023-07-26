#include <stdio.h>
int main()
{

 int pai, r, p2;
 printf ("Enter value in paise: ");
 scanf ("%d", &pai);

 r = pai/100;
 p2 = pai%100;

 printf ("Rupees: %d", r);
 printf ("\nPaise: %d", p2);

 return 0;

}
