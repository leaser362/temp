#include <stdio.h>
int main()
{
    int n;
    int i=0;
    int count=1;
    printf("add N: ");
    scanf("%d",&n);
    int f0=0;
    int f1=1;
    int f2;
    while (1)
    {
        f2=f1+f0;//1=1+0
        count++;
		f0=f1;//2
        f1=f2;//f1=1
        if(f2>=n)
        break;
    }
    if(f2==n)
    {   
        printf("%d is the %d number in Fibonacci",f2,count);
    }
    if (f2>n)
    printf("%d is the %d number in Fibonacci",f1,count-1);
    return 0;
}
