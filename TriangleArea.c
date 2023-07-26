#include <stdio.h>
int main()
{
	float b, h, ar;
	
	printf ("Enter the breadth and height of the triangle");
	scanf ("%f%f", &b, &h);
	
	ar = 0.5 * b * h;
	
	printf ("The area if triangle is: %f", ar);
	
	return 0;
}
