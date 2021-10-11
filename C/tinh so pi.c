#include<stdio.h>
#include<math.h>

int main(){
    double pi,a,sum=0;
    int i=0;
    printf("Add a:");
    scanf("%lf",&a);
    while(a>=1/(2i+1)){
        sum+=pow(-1,i)*(1/(2i+1));
        i++;
    }
    printf("pi=%lld",sum*4);
}