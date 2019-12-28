#include<stdio.h>
int main()
{
	int n,i,j=0,temp=0,count=0;
	scanf("%d",&n);
	int a[n],b[n],c[n];
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	temp=a[0];
	for(i=0;i<n;)
	{
	    if(temp!=a[i])
	    {
	        b[j]=i;
	        count +=2;
	        while(temp!=a[i++])
	        {
	            count++;
	        }
	        c[j]=count;
	        count=0;
	        j++;
	    }
	    else
	      i++;
	}
	printf("%d\n",j);
	for(i=0;i<j;i++)
	{
	    printf("%d %d",b[i],c[i]);
	}
	
	return 0;
}