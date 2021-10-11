#include<stdio.h>
int main()
{
    int n;
    printf("Find factorial of n:");
    scanf("%d",&n);
    if(n<0)
    {
        if(n==0) 
        printf("0!=1");
        else
        printf("%d is a negative number.We cant find the factorial of n");
    }
    else
    {
        int i,gt;
        for(i=2;i<=n;i++)
        {
            gt=gt*i;
        }
        printf("%d!=%d",n,gt);
    }
}
