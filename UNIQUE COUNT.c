#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    int n,i,j,count=0;
    scanf("%d",&n);
    char *ptr=(char *)malloc(n*sizeof(char));
    for(i=0;i<n*2;i++)
    {
        scanf("%c",(ptr+i));
    }
    for(i=1;i<n*2;i++)
    {
        for(j=0;j<i;j++)
        {
            if(tolower(*(ptr+i))==tolower(*(ptr+j)))
            break;
        }
        if(i==j)
        count++;
    }
    printf("%d",count);
return 0;
}