#include<stdio.h>
int GCD(int p,int q)
{
    int i,gcd;
    for(i=1;i<=p &&i<=q;i++)
    if(p%i==0&&q%i==0)
    gcd=i;
    return gcd;
}
int LCM(int v,int c)
{
    int min=0;
    min=(v>c)?v:c;
    while(1)
    {
        if(min%v==0 && min%c==0)
        break;
        min++;
    }
    return min;
}
int main()
{
	int n,m,a,b;
	printf("Enter two integers:\n");
	scanf("%d%d",&n,&m);
	if(n==0 && m>0)
	{
	    printf("Greatest common divisor of %d and %d=%d\n",n,m,m);
	    printf("Least common multiple of %d and %d=0\n",n,m);
	    return 0;
	}
	if(n>0 && m==0)
	{
	    printf("Greatest common divisor of %d and %d=%d\n",n,m,m);
	    printf("Least common multiple of %d and %d=0\n",n,m);
	    return 0;
	}
	if(n==0 && m==0)
	{
	    return 0;
	}
	a=GCD(n,m);
	b=LCM(n,m);
	    printf("Greatest common divisor of %d and %d = %d\n",n,m,a);
	    printf("Least common multiple of %d and %d = %d\n",n,m,b);
	return 0;
}