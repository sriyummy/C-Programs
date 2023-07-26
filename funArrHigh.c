
#include<stdio.h>
void hi(int x[],int y);
void hi(int x[],int y)
{
        int h=x[0];
        int i;
        for(i=1;i<y;i++)
                if(h<x[i])
                        h=x[i];
        printf("Highest is : %d ",h);
}
int main()
{
        int n;
        printf("Enter size of array :");
        scanf("%d",&n);
        int x[n];
        printf("Enter the array elements ");
        int i;
        for(i=0;i<n;i++)
                scanf("%d",&x[i]);
        hi(x,n);
        return 0;
}

