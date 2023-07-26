#include <stdio.h>
int main()
{
	char upr, lwr;  
	int a;  
      
     
	printf (" Enter the Upper Case Character: ");  
	scanf (" %c", &upr);  
	a = upr + 32;  
	printf (" %c character in Lower case is: %c", upr, a);  
      
    	printf (" \n Enter the Lower Case Character: ");  
    	scanf (" %c", &lwr);  
    	a = lwr - 32;  
    	printf (" %c character in the Upper case is: %c", lwr, a);
        
        return 0;
} 
