#include <stdio.h>
#include <math.h>

int digSum (int num);
int revFind (int num);
void pdrmTest (int num);
void fiboGen (int num);
void armTest (int num);
void prmTest (int num);
void pfctTest (int num);
int factFind (int num);
void numComp (int a, int b, int c);

int main()
{
    int ch, n, res;
    
    printf ("Enter the corresponding numbers to perform the respective function.\n1. Find Sum of Digits.\n2. Find Reverse of a Number.\n3. Test for Pallindrome.\n4. Generate Fibonacci Series.\n5. Test for Armstrong.\n6. Test for Prime.\n7. Test for Perfect. \n8. Find Factorial.");
    scanf ("%d", &ch);
    
    switch (ch)
    {
        case (1):
        {
            printf ("Enter a number: ");
            scanf ("%d", &n);
            res = digSum (n);
            break;
        }
        case (2):
        {
            printf ("Enter a number: ");
            scanf ("%d", &n);
            res = revFind (n);
            break;
        }
        case (3):
        {
            printf ("Enter a number: ");
            scanf ("%d", &n);
            pdrmTest (n);
            break;
        }
        case (4):
        {
            printf ("Enter upto what number the series should be generated: ");
            scanf ("%d", &n);
            fiboGen (n);
            break;
        }
        case (5):
        {
            printf ("Enter a number: ");
            scanf ("%d", &n);
            armTest (n);
            break;
        }
        case (6):
        {
            printf ("Enter a number: ");
            scanf ("%d", &n);
            prmTest (n);
            break;
        }
        case (7):
        {
            printf ("Enter a number: ");
            scanf ("%d", &n);
            pfctTest (n);
            break;
        }
        case (8):
        {
            printf ("Enter a number: ");
            scanf ("%d", &n);
            res = factFind (n);
            printf ("%d", res);
            break;
        }
        case (9):
        {
            int z, y, x;
            printf ("Enter 3 numbers to compare: ");
            scanf ("%d%d%d", &x, &y, &z);
            numComp (x, y, z);
            break;
        }
        default:
        {
            printf ("Enter a valid input!");
        }
    }
}

int digSum (int num)
{
    int sum=0;
    
    while (num>0)
	{
		sum = sum + num%10;
		num = num/10;
	}
	return sum;
}

int revFind (int num)
{
    int r, rev;
    while (num>0)
	{
		r = num % 10;
		rev = (rev*10) + r;
		
		num = num/10;
	}
	return rev;
}

void pdrmTest (int num)
{
    int num2, r, rev;
    num2 = num;
	
	for ( ; num > 0; )
	{
		r = num % 10;
		rev = rev*10 + r;
		
		num = num/10;
	}
	
	if (num2 == rev)
	{
		printf ("Pallindrome confirmed!");
	}
	
	else
	{
		printf ("Not a pallindrome!");
	}
}

void fiboGen (int num)
{
    int i;
	int t1=0, t2=1;
	int nt = t1 +t2;
	
	printf ("Series for the given number of terms: %d, %d", t1, t2);
	
	for (i=3; i<=num; ++i)
	{
		printf (", %d", nt);
		
		t1 = t2;
		t2 = nt;
		nt = t1 + t2;
	}
}

void armTest (int num)
{
    int num2, d, sum=0;
    
    num2 = num;
	
	for ( ; num2>0 ; )
	{
		d = num2 % 10;
		sum = sum + (d*d*d);
		num2 = num2/10;
	}
	
	if (num == sum)
	{
		printf ("Armstrong Number confirmed!");
	}	
	else
	{
		printf ("Not an armstrong number!");
	}
}

void prmTest (int num)
{
    int i, c=0;
    
    for (i = 1; i<=(num+1)/2; i++)
	{
		if (num%i == 0)
		{
			c = c+1;
		}
	}
	
	if (c>1)
	{
		printf ("Composite Number!");
	}
	else
	{
		printf ("Prime Number!");
	}
}

void pfctTest (int num)
{
    int i, sum=0;
    
    for (i = 1; i<=(num+1)/2; i++)
	{
		if (num % i == 0)
		{
			sum = sum +i;
		}
	}
	
	if (num == sum)
	{
		printf ("Perfect Number!");
	}
	
	else
	{
		printf ("Not a perfect number :(");
	}
}

int factFind (int num)
{
    int i, fact = 1;
    
    for (i=1 ; i<=num ; i++)
	{
		if (num != 0)
		{
			fact = fact*i;
		}
		
		else
		{
			printf ("Factorial of 0 is 1");
		}
	}
	return fact;
}

void numComp (int a, int b, int c)
{
    if (a>b)
	{
		if (a>c)
		{
			printf ("\na is the largest number");
		}
		else
		{
			printf ("\nc is the largest number");
		}
	}
	else
	{
		if (b>c)
		{
			printf ("\nb is the largest number");
		}
		else
		{
			printf ("\nc is the largest number");
		}
	}
}
