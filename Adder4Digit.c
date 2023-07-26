#include <stdio.h>
int main()
{
 int a, b, c, d, num, sum = 0;
 printf ("Enter a 4 digit number:");
 scanf ("%d", &num);
 
 a = num%10;
 num = num/10;
 b = num%10;
 num = num/10;
 c = num%10;
 num = num/10;
 d = num%10;
 
 sum = sum + a + b + c + d;
 
 printf ("The sum of digits is: %d", sum);
 
 return 0;
}
