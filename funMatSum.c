#include<stdio.h>

void sumFind (int x[][100],int m,int n);

int main()
{
	int x[100][100];
	int m,n;
	printf("Enter m and n  :");
	scanf("%d%d",&m,&n);
	printf("Enter the array elements ");
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&x[i][j]);	
	sumFind (x,m,n);
	return 0;
}

void sumFind (int x[][100],int m,int n)
{
	int i,j,t=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			t+=x[i][j];
		}
	}
	printf("Sum : %d",t);
}
