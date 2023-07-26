#include<stdio.h>
int main()
{
int i,n;
int a[10]={1,2,3,4,5,6,7,8,9,10};
int ctr;
printf("Enter a number for search availibility = ");
scanf("%d",&n);
for(i=1;i<10;i++)
{
if(a[i]==n)
{
printf("The given element is available \n");
printf("index=%d\n",i);
}
}
return 0;
}
