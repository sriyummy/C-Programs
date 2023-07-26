#include <stdio.h>
int main()
{
 
 int a, b, c;
 
 a = 10;
 b = 20;
 
 printf ("Initial values of a and b are: %d and %d", a, b);
 
 c = a;
 a = b;
 b = c;
 
 printf ("\nAfter swapping, the values of a and b are: %d and %d", a, b);
 
 return 0;
 
}
