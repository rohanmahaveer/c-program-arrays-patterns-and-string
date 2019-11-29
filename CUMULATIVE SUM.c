#include<stdio.h>
int main()
{
	int a[15],c[15],i,n,sum=0;
	printf("Enter the number of elements in an array\n");
	scanf("%d",&n);
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	    sum +=a[i];
	    c[i]=sum;
	}
	printf("Cumulative sum\n");
	for(i=0;i<n;i++)
	    printf("%d ",c[i]);
	
	
	
	return 0;
}