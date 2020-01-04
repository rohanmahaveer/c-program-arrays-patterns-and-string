#include<stdio.h>
int main()
{
	int n,i,j=0,c=0,v=0,k=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	    v=a[i];
	    if(a[i]!=0)
	    {
	        if(j==v)
	        {
	            k=0;
	            j=0;
	        }
	        if(v!=k)
	        {
	            c+=a[i]+1;
	            j=0;
	        }
	        else
	        j++;
	    }
	    else
	    {
	        c++;
	    }
	    k=a[i];
	}
	printf("%d",c);
	
	return 0;
}