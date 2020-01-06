#include <stdio.h>
#include<stdlib.h>
void changeValue(int *a,int *b) {
   int m,n;
   n=*a;
   m=*b;
   *a=n+m;
   if(*a<0)
   *(a)*=(-1);
   *b=n-m;
   if(*b<0)
   *(b)*=(-1);
   
}

int main() {
    int a, b;    
    scanf("%d %d", &a, &b);
   changeValue(&a,&b);
    printf("%d\n%d", a, b);
    return 0;
}