#include <stdio.h>  
int main()  
{  
      
    int i, j, r, a = 0;  
    printf (" Enter number of rows: \n");  
    scanf ("%d", &r);   
      
    for ( i =1; i <= r; i++)  
    {  
        for ( j = 1; j <= (r - i); j++)  
        {  
            printf ("  ");   
        }  

        for ( a = 1; a <= ( 2 * i - 1); a++)  
         {  
            printf ("* "); 
        }  
        printf ("\n");  
    }  
    
    return 0; 
}  
