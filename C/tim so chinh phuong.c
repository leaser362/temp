#include<stdio.h>
#include<math.h>
int main()
{
   printf("[m,n]");
   printf("\nAdd m:");
   int m;
   scanf("%d",&m);
   printf("\nAdd n:");
   int n;
   scanf("%d",&n);
   int i;
  if(m>n&&m>0)
  printf("Please , m<n(m>0)");
  else{
     printf("All the square numbers are in [%d,%d] are: ",m,n);
     int start=sqrt(m);
     start=(start*start==m)?start:start+1;
     int end=sqrt(n);
    for(i=start;i<=end;i++)
    {
        printf("%d ",i*i);
    }
         
  }
    return 0;
}
