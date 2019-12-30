#include<stdio.h>
int main()
{
	int n,i,j,f=0;
	scanf("%d",&n);
	int a[n],b[n],c[n],d[n];
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	    scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
	    c[i]=a[i]-b[i];
	    d[i]=a[i]+b[i];
	}
	for(i=0;i<n;i++)
	{
	    for(j=0;j<n;j++)
	    {
	        if(i!=j)
	        {
	            if(c[i]>=c[j] && d[i]<=d[j])
	            {
	                f=1;
	                printf("%d\n",a[i]);
	            }
	        }
	    }
	    
	}
	if(f==0)
	{
	    printf("-1");
	}
		return 0;
}