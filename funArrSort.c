//wap to sort one array using funcn
#include<stdio.h>
void sort(int x[],int y);
void sort(int x[],int y)
{
	int i,j,t;
	for(i=0;i<y;i++)
	{
		for(j=1;j<(y-i);j++)
		{
			if(x[j-1]>x[j])
			{
				t=x[j-1];
				x[j-1]=x[j];
				x[j]=t;
			}
		}
	}
	printf("Sorted elements : ");
	for(i=0;i<y;i++)
		printf("%d",x[i]);
}
int main()
{
	int n;
	printf("Enter size of array :");
	scanf("%d",&n);
	int x[n];
	printf("Enter the array elements ");
	for(int i=0;i<n;i++)
		scanf("%d",&x[i]);	
	sort(x,n);
	return 0;
}
