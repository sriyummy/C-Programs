#include <stdio.h>

int fact (int num);

int main()
{
    int n, f;
    
    printf ("Enter the number you want to find the factorial of: ");
    scanf ("%d", &n);
    
    printf ("The factorial of %d is %d", n, fact(n));
    
    return 0;
}

int fact (int num)
{
    if (num==0)
    {
       return 1;
    }
    else
    {
        return (num*fact(num-1));
    }
}
