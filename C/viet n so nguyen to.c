#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Add n:");
    scanf("%d",&n);
    if(n<=2)
    {
        if(n=2)
        printf("The prime number is: %d",n);
        else 
        printf("The prime number does not exits");
    }
    else 
    {
        printf("");
        int i,o;
        int count=0;
        for(i=2;i<=n;i++)
        {
            for (o=2;o<=sqrt(i);o++)
            {
                if(i%o==0){
                count++;}
            }
            if (count==0)
            {printf("%d ",i);}
            else count=0;
        }
    }
}
