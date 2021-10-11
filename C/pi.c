#include<stdio.h>
#include<math.h>

int main(){
    double a,sum=0;
    int s=-1;
    int i=0;
    printf("Add a:");
    scanf("%lf",&a);
    double b= (float)1/(2*i+1);
    while(a<=b){
        b= (float)1/(2*i+1);
        sum=sum+(-1)*s*b;
        i++;
        s=s*(-1);
    }
    printf("pi=%0.8lf",sum*4);
    return 0;
}
