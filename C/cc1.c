#include<stdio.h>
#include<math.h>

int main(){
    double a,sum=0;
    int i=0;
   printf("do chinh xac:");
   scanf("%lf",&a);
   int dau=-1;
   double b=(float)1/(2*i+1);
   while(a<=b){
       b=(float)1/(2*i+1);
       sum=sum+(-1)*dau*b;
       i++;
       dau*=(-1);
   }
    return 0;
}