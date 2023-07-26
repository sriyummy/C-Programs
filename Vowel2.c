#include <stdio.h>
int main()
{
	char a;
	
	printf ("Enter a character: ");
	scanf ("%c", &a);
	
	switch (a)
	{
		case ('a'):
		{
			printf ("The input is a vowel");
			break;
		}
		
		case ('A'):
		{
			printf ("The input is a vowel");
			break;
		}
		
		case ('e'):
		{
			printf ("The input is a vowel");
			break;
		}
		
		case ('E'):
		{
			printf ("The input is a vowel");
			break;
		}
		
		case ('i'):
		{
			printf ("The input is a vowel");
			break;
		}
		
		case ('I'):
		{
			printf ("The input is a vowel");
			break;
		}
		
		case ('o'):
		{
			printf ("The input is a vowel");
			break;
		}
		
		case ('O'):
		{
			printf ("The input is a vowel");
			break;
		}
		
		case ('u'):
		{
			printf ("The input is a vowel");
			break;
		}
		
		case ('U'):
		{
			printf ("The input is a vowel");
			break;
		}
		default:
		{
			printf ("It's not a vowel and is either a consonant or a special character");
		}
	}
	return 0;
}
