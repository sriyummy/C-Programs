#include <stdio.h>
int main()
{
 
 float fin, cin;
 float cel, far;
 
 printf ("Enter temperature in farenheit: ");
 scanf ("%f", &fin);
 cel = (fin -32) * 0.55;
 printf ("Converted temperature in Celcius is: %f", cel);
 
 printf ("\nEnter temperature in celcius: ");
 scanf ("%f", &cin);
 far = (cin * 1.8) + 32;
 printf ("Converted temperature in Farenheit is: %f", far);
 
 return 0;
 
}  
