#include<stdio.h>

void sum(int x[],int y);
void sum(int x[],int y)
{
        int s=0;
        for(int i=0;i<y;i++)
                s+=x[i];
        printf("Sum is : %d ",s);
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
        sum(x,n);
        return 0;
}
