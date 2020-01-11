#include<stdio.h>
int main()
{
    int m,n,p,q,f,i,j;
    scanf("%d",&m);
	scanf("%d",&n);
     char a[m][n];
	for(i=0;i<m;i++)
	{
	    for(j=0;j<n;j++)
	    {
	        scanf(" %c",&a[i][j]);
	       
	    }
	}
	scanf("%d",&f);
	for(i=0;i<m;i++)
	{
	    for(p=0;p<f;p++)
	    {
	        for(j=0;j<n;j++)
	        {
	            for(q=0;q<f;q++)
	            {
	                printf("%c",a[i][j]);
	            }
	        }
	            printf("\n");
	    }
	}
	return 0;
}