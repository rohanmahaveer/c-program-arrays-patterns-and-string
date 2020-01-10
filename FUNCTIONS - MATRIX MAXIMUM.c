#include <stdio.h>
#include <stdlib.h>
int findMax(int **a, int m, int n)
{
    int s=0,i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(s<*(*(a+i)+j))
            {
                s=*(*(a+i)+j);
            }
        }
    }
    return s;
}
int main()
{
    int **x;
    int i,j,r,c,m;
    printf("Enter the number of rows in the matrix\n");
    scanf("%d",&r);
    printf("Enter the number of columns in the matrix\n");
    scanf("%d",&c);
    x=(int **)malloc(r*sizeof(int *));
    for(i=0;i<r;i++)
    {
        *(x+i)=(int *)malloc(c*sizeof(int));
    }
    printf("Enter the elements in the matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",*(x+i)+j);
        }
    }
    printf("The matrix is\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",*(*(x+i)+j));
        }
        printf("\n");
    }
    m=findMax(x,r,c);
    printf("The maximum element in the matrix is %d",m);
    return 0;
}