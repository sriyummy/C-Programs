//wap to find out nCr 
#include<stdio.h>
void ncr(int n,int r);
int fact(int);
int fact(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
void ncr(int n,int r)
{
	int ans;
	int nf=fact(n);
	int rf=fact(r);
	int nrf=fact(n-r);
	ans=nf/(rf*nrf);
	printf("nCr : %d",ans);
}
int main()
{
	int r,n;
	printf("Enter n and r  :");
	scanf("%d%d",&n,&r);
	ncr(n,r);
	return 0;
}
