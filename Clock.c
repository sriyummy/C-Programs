#include <stdio.h>
int main()
{
 
 int hr, min, sec, secin;

 printf ("Enter time in econds: ");
 scanf ("%d", &secin);

 hr = secin/3600;
 min = (secin - (3600 * hr))/60;
 sec = (secin - (3600 * hr) - (min * 60));

 printf ("H:   ---->   %d", hr);
 printf ("\nM:   ---->   %d", min);
 printf ("\nS:   ---->   %d", sec);

 return 0;
 
}
