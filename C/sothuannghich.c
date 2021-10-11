#include<stdio.h>
int main()
{
    unsigned long long n;
    printf("Add N:");
    scanf("%llu",&n);
    unsigned long long m=n;
    unsigned long long dao=0;
    while(m>0)
    {
        dao=dao*10+m%10;
        m=m/10;
    }
    if(dao=n)
    printf("%d is a reciprocity number",n);
    else printf("%d is not a reciprocity number",n);
}
