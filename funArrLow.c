
#include<stdio.h>
void low(int x[],int y);
void low(int x[],int y)
{
        int l=x[0];
        int i;
        for (i=1;i<y;i++)
                if(l>x[i])
                        l=x[i];
        printf("Lowest is : %d ",l);
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
        low(x,n);
        return 0;
}

