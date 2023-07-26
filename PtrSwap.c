#include <stdio.h>

int main()
{
    int a, b, c;
    
    int* p1=&a;
    int* p2=&b;
    int* p3=&c;
    int* temp;
    
    printf ("Enter three numbers where values swapped are: \na-->b\nb-->c\nc-->a\n");
    scanf ("%d%d%d", p1, p2, p3);
    
    temp = p1;
    p1 = p2;
    p2 = p3;
    p3 = temp;
    
    printf ("The swapped values are: \n");
    printf ("a= %d b=%d c=%d", *p1, *p2, *p3);
    
    return 0;
}
