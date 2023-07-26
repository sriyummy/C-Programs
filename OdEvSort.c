#include<stdio.h>
int main()
{
int i,odd=0,even=0;
int a[10];
printf("enter the 10 numbers = ");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
if(a[i]%2==0)
{
printf("%d ",a[i]);
}
}
for(i=0;i<10;i++)
{
if(a[i]%2!=0)
{
printf("%d ",a[i]);
}
}

return 0;
}
