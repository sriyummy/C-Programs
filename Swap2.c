# include <stdio.h>
int main()
{
  
  int a, b; 
  a = 10, b = 20;
  
  printf ("Initial values of a and b are: %d and %d", a, b);
  
  a = a * b;
  b = a / b;
  a = a / b;
  
  printf ("\nSwapped values of a and b are: %d and %d", a, b);
  
  return 0;
  
}
