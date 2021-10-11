#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    int m;
    printf("Add N:");
    scanf("%d",&n);
    while (n>0)
    {
     m=n%10; 
     sum+=m;
     m=0;
     n=n/10;
    }
    printf("SUM=%d",sum);
    return 0;
    pause;
}
