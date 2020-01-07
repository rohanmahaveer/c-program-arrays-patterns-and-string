#include<stdio.h>
void swap(int *a,int *b)
{
    int i;
    i=*a;
    *a=*b;
    *b=i;
}
int main()
{
	int a,b;
	printf("Enter the value of a\n");
	scanf("%d",&a);
	printf("Enter the value of b\n");
	scanf("%d",&b);
	printf("Before swapping\na = %d b = %d\n",a,b);
	swap(&a,&b);
	printf("After swapping\na = %d b = %d\n",a,b);
	
	return 0;
}